/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spalta <spalta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 12:57:45 by spalta            #+#    #+#             */
/*   Updated: 2023/01/04 19:08:51 by spalta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*d;
	int		i;
	int		j;
	if (!s1)
	{
		s1 = malloc(sizeof(char));
		*s1 = '\0';
	}
	i = 0;
	j = 0;
	if (s1)
	{
		d = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
		if (!d)
			return (NULL);
		while (s1[i] != '\0')
		{
			d[i] = s1[i];
			i++;
		}
		while (s2[j] != '\0')
		{
			d[i++] = s2[j];
			j++;
		}
		d[i] = '\0';
		free(s1);
		return (d);
	}
	free(s1);
	return (0);
}

char	*ft_strchr(char *s, char *p, int c)
{
	while ((char)c != *s)
	{
		*p = *s;
		if (!*s)
			return (0);
		s++;
		p++;
	}
	if ((char)c == *s) // direkt new line ise;
	{
		*p = '\n';
		p++;
		*p = '\0';
		s++;
	}
	return ((char *)s);
}

int	ft_check(char *pt)
{
	int		i;
	
	if (!pt)
		return (1);
	i = 0;
	while (pt[i])
	{
		if (pt[i] == '\n')
			return (0);
		i++;
	}
	return (1);
}
