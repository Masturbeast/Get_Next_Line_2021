/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaji <mnaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 12:26:58 by mnaji             #+#    #+#             */
/*   Updated: 2019/11/11 12:47:11 by mnaji            ###   ########.fr       */
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
