/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spalta <spalta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 12:50:26 by spalta            #+#    #+#             */
/*   Updated: 2023/01/04 19:08:53 by spalta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

char	*ft_archive(int fd, char *archive)
{
	char	*book;
	int		r_byte;

	book = malloc(sizeof(char) * BUFFER_SIZE + 1);

	r_byte = 1;
	while (ft_check(archive) && r_byte != 0)
	{
		r_byte = read(fd, book, BUFFER_SIZE);
		if (r_byte == -1)
		{
			return (0);
		}
		book[r_byte] = '\0';
		archive = ft_strjoin(archive, book);
	}
	free(book);
	return (archive);
}

char	*get_next_line(int fd)
{
	static	char *archive;
	char	*ret;
	
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	ret = malloc(sizeof(char *));

	archive = ft_archive(fd,archive);
	archive = ft_strchr(archive, ret, '\n');
	return (ret);
}
