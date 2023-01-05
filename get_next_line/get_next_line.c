/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spalta <spalta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 12:50:26 by spalta            #+#    #+#             */
/*   Updated: 2023/01/05 21:05:38 by spalta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_archive(int fd, char *archive)
{
	char	*book;
	int		r_byte;

	book = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	r_byte = 1;
	while (ft_check(archive) && r_byte != 0)
	{
		r_byte = read(fd, book, BUFFER_SIZE);
		book[r_byte] = '\0';
		if (r_byte == -1)
		{
			free(book);
			return (0);
		}
		archive = ft_strjoin(archive, book);
	}
	free(book);
	return (archive);
}

char	*get_next_line(int fd)
{
	static	char *archive;
	char	*ret;
	char *set;
	
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	archive = ft_archive(fd,archive);
	if (!archive)
		return (NULL);
	archive = ft_strdup(archive);
	ret = ft_strdup(archive);
	archive = ft_strchr(archive, '\n') + 1;
	int i = 0;
	while (ret[i] != '\n' && ret[i])
	{
		set[i] = ret[i];
		i++;
		if (ret[i] == '\n')
		{
			set[i] = ret[i];
			i++;	
		}
		if (ret[i] == '\0')
			set[i] = ret[i];
	}
	set = malloc(sizeof(char) * i );
	free(ret);
	return (set);
}
