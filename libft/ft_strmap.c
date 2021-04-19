/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atep <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 16:52:55 by atep              #+#    #+#             */
/*   Updated: 2018/12/12 19:31:47 by atep             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char	const *s, char (*f)(char))
{
	char	*strnew;
	int		i;
	int		len;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	if (!(strnew = ft_strnew(len)))
		return (NULL);
	strnew[len] = '\0';
	i = 0;
	while (s[i] != '\0')
	{
		strnew[i] = f(s[i]);
		i++;
	}
	return (strnew);
}
