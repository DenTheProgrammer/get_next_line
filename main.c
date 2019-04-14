/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: den <den@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 15:22:17 by mdebbi            #+#    #+#             */
/*   Updated: 2019/04/14 15:22:26 by den              ###   ########.fr       */
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
	int fd3 = open("get_next_line.c", O_RDONLY);
	
	while (get_next_line(fd3, &line) > 0)
		printf("%s\n", line);
	// retval = get_next_line(fd, &line);
	// printf("ret = %d     %s\n", retval, line);
	// retval = get_next_line(fd, &line);
	// printf("ret = %d     %s\n", retval, line);
	// retval = get_next_line(fd, &line);
	// printf("ret = %d     %s\n", retval, line);
	// retval = get_next_line(fd, &line);
	// printf("ret = %d     %s\n", retval, line);
	// retval = get_next_line(fd, &line);
	// printf("ret = %d     %s\n", retval, line);
	// retval = get_next_line(fd, &line);
	// printf("ret = %d     %s\n", retval, line);
	// retval = get_next_line(fd, &line);
	// printf("ret = %d     %s\n", retval, line);
	// retval = get_next_line(fd, &line);
	// printf("ret = %d     %s\n", retval, line);
	// retval = get_next_line(fd, &line);
	// printf("ret = %d     %s\n", retval, line);
	// retval = get_next_line(fd, &line);
	// printf("ret = %d     %s\n", retval, line);
	// retval = get_next_line(fd, &line);
	// printf("ret = %d     %s\n", retval, line);
	// retval = get_next_line(fd, &line);
	// printf("ret = %d     %s\n", retval, line);
    return 0;
}
