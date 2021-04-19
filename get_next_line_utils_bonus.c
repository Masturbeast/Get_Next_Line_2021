/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atep <atep@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 21:02:03 by atep              #+#    #+#             */
/*   Updated: 2021/04/19 21:02:08 by atep             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

int		multi_fd(t_stock *stock, int fd)
{
	int i;

	i = 0;
	while (fd != 0 && ++i < OPEN_MAX)
		if (stock[i].fd == fd)
			return (i);
	i = 0;
	while (++i < OPEN_MAX)
		if (stock[i].fd == 0)
		{
			stock[i].fd = fd;
			return (i);
		}
	return (-1);
}
