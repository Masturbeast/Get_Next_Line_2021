/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atep <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 15:07:31 by atep              #+#    #+#             */
/*   Updated: 2018/12/12 18:37:45 by atep             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *newstr;

	newstr = (char *)malloc(sizeof(char) * (size + 1));
	if (newstr == 0)
		return (NULL);
	ft_bzero(newstr, size + 1);
	return (newstr);
}
