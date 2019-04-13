/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdebbi <mdebbi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 15:22:17 by mdebbi            #+#    #+#             */
/*   Updated: 2019/04/13 21:31:03 by mdebbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include "get_next_line.h"

int main() {
	char *line;
	int retval;
    int fd = open("test.txt", O_RDONLY);
	int fd2 = open("test2.txt", O_RDONLY);
	
	retval = get_next_line(fd, &line);
	printf("ret = %d     %s\n", retval, line);
	retval = get_next_line(fd, &line);
	printf("ret = %d     %s\n", retval, line);
	retval = get_next_line(fd, &line);
	printf("ret = %d     %s\n", retval, line);
	retval = get_next_line(fd, &line);
	printf("ret = %d     %s\n", retval, line);
	retval = get_next_line(fd, &line);
	printf("ret = %d     %s\n", retval, line);
	retval = get_next_line(fd, &line);
	printf("ret = %d     %s\n", retval, line);
	retval = get_next_line(fd, &line);
	printf("ret = %d     %s\n", retval, line);
	retval = get_next_line(fd, &line);
	printf("ret = %d     %s\n", retval, line);
	retval = get_next_line(fd, &line);
	printf("ret = %d     %s\n", retval, line);
	retval = get_next_line(fd, &line);
	printf("ret = %d     %s\n", retval, line);
	retval = get_next_line(fd, &line);
	printf("ret = %d     %s\n", retval, line);
	retval = get_next_line(fd, &line);
	printf("ret = %d     %s\n", retval, line);
    return 0;
}
