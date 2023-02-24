/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spalta <spalta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 15:48:15 by spalta            #+#    #+#             */
/*   Updated: 2023/01/09 14:29:50 by spalta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 
# endif

int		ft_strlen_gnl(char *str);
int		ft_check(char	*str);
char	*ft_strjoin_gnl(char *s1, char *s2);
char	*get_archive(int fd, char *archive);
char	*get_next_line(int fd);
char	*ft_line(char *s1);
char	*ft_archive(char *s1);

#endif