/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spalta <spalta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 12:57:45 by spalta            #+#    #+#             */
/*   Updated: 2023/01/05 20:59:28 by spalta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"


int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
		i++;
	return (i);
}

char	*ft_strdup(const char *s1)
{
	int	i;
	char	*dest;

	i = 0;
	dest = (char *)malloc(ft_strlen(s1) + 1);
	if (!dest)
		return (NULL);
	while (s1[i])
	{
		dest[i] = s1[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(char *s1, char *s2)
{
	size_t	i;
	size_t	j;
	char	*str;

	if (!s1)
	{
		s1 = malloc (sizeof(char) * 1);
		s1[0] = '\0';
	}
	if (!s2)
		return (0);
	str = malloc (sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!str)
		return (0);
	i = -1;
	while (s1[++i] != '\0')
		str[i] = s1[i];
	j = 0;
	while (s2[j] != '\0')
		str[i++] = s2[j++];
	str[i] = '\0';
	free(s1);
	return (str);
}
int	ft_check(char *pt)
{
	int		i;
	
	if (!pt)
		return (1);
	i = 0;
	while (pt && pt[i])
	{
		if (pt[i] == '\n')
			return (0);
		i++;
	}
	return (1);
}

char	*ft_strchr(const char *s, int c)
{
	while ((char)c != *s && *s != '\0')
		s++;
	return ((char *)s);
}
