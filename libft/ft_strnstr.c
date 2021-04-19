/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atep <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/06 15:54:35 by atep              #+#    #+#             */
/*   Updated: 2018/12/06 15:55:15 by atep             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	int i;

	i = 0;
	if (!*str)
	{
		if (*str == *to_find)
			return ((char*)str);
		else
			return (NULL);
	}
	while (*str)
	{
		if (ft_strnequ(to_find, str, ft_strlen(to_find)))
			if (ft_strlen(to_find) + i <= n)
				return ((char*)str);
		i++;
		str++;
	}
	return (NULL);
}
