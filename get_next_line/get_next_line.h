/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spalta <spalta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 12:48:46 by spalta            #+#    #+#             */
/*   Updated: 2023/01/05 20:05:39 by spalta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

# include <stdlib.h>
# include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

char	*ft_archive(int fd, char *archive);
int		ft_strlen(const char *s);
char	*ft_strjoin(char *s1, char *s2);
int		ft_check(char *pt);
char	*get_next_line(int fd);
char	*ft_strdup(const char *s1);
char	*ft_strchr(const char *s, int c);

# endif