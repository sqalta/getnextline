/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spalta <spalta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 14:30:56 by spalta            #+#    #+#             */
/*   Updated: 2023/01/09 16:08:00 by spalta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

int	ft_strlen_gnl(char *str)
{
	int	i;

	i = 0;
	while (*(str + i))
		i++;
	return (i);
}

int	ft_check(char	*str)
{
	int	i;

	i = 0;
	if (!str)
		return (1);
	while (*(str + i))
	{
		if (*(str + i) == '\n')
			return (0);
		i++;
	}
	return (1);
}

char	*ft_strjoin_gnl(char *s1, char *s2)
{
	char	*str;
	int		i;
	int		j;

	if (!s1)
	{
		s1 = malloc(1 * sizeof(char));
		*s1 = '\0';
	}
	str = malloc(sizeof(char) * (ft_strlen_gnl(s1) + ft_strlen_gnl(s2) + 1));
	if (!str)
		return (NULL);
	i = -1;
	while (*(s1 + ++i))
		*(str + i) = *(s1 + i);
	j = -1;
	while (*(s2 + ++j))
		*(str + i + j) = *(s2 + j);
	*(str + i + j) = '\0';
	free(s1);
	return (str);
}

char	*ft_line(char *s1)
{
	char	*line;
	int		i;

	i = 0;
	if (!*s1)
		return (NULL);
	while (*(s1 + i) && *(s1 + i) != '\n')
		i++;
	line = malloc(sizeof(char) * i + 2);
	if (!line)
		return (NULL);
	i = 0;
	while (*(s1 + i) && *(s1 + i) != '\n')
	{
		*(line + i) = *(s1 + i);
		i++;
	}
	if (*(s1 + i) == '\n')
	{
		*(line + i) = '\n';
		i++;
	}
	*(line + i) = '\0';
	return (line);
}

char	*ft_archive(char *s1)
{
	int		i;
	int		j;
	char	*new;

	i = 0;
	j = 0;
	while (*(s1 + i) != '\n' && *(s1 + i))
		i++;
	if (!*(s1 + i))
	{
		free(s1);
		return (NULL);
	}
	new = malloc(sizeof(char) * (ft_strlen_gnl(s1) - i + 1));
	if (!new)
		return (NULL);
	i++;
	while (*(s1 + i))
		*(new + j++) = *(s1 + i++);
	*(new + j) = '\0';
	free(s1);
	return (new);
}
