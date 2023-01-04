/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spalta <spalta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 13:12:39 by spalta            #+#    #+#             */
/*   Updated: 2023/01/04 19:07:19 by spalta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int main ()
{
	int fd = open ("deneme.txt", O_CREAT | O_RDONLY, 0777);
	
	printf("sonuç->%s",get_next_line(fd));
	printf("sonuç->%s",get_next_line(fd));
	printf("sonuç->%s",get_next_line(fd));

}