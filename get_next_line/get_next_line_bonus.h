/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spalta <spalta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 19:57:29 by spalta            #+#    #+#             */
/*   Updated: 2023/01/10 20:02:03 by spalta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <unistd.h>
# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 25
# endif

int		ft_n(char *s1);
char	*ft_strjoin(char *s1, char *s2);
int		ft_strlen(char *str);
char	*ft_get_line(char *str);
char	*ft_update_str(char *str);
char	*get_next_line(int fd);
#endif