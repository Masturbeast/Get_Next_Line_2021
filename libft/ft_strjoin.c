/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atep <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 15:29:14 by atep              #+#    #+#             */
/*   Updated: 2019/02/28 16:32:47 by atep             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*strnew;
	int		len;
	int		i;

	if (!s1)
		len = ft_strlen(s2);
	else if (!s2)
		len = ft_strlen(s1);
	else
		len = ft_strlen(s1) + ft_strlen(s2);
	strnew = (char *)malloc(sizeof(char) * (len + 1));
	if (strnew == 0)
		return (NULL);
	i = 0;
	while (s1 && *s1)
		strnew[i++] = *(s1++);
	while (s2 && *s2)
		strnew[i++] = *(s2++);
	strnew[i] = '\0';
	return (strnew);
}
