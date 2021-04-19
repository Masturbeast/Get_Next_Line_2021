/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atep <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/06 15:03:25 by atep              #+#    #+#             */
/*   Updated: 2018/12/12 21:46:58 by atep             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_nb_line(char const *s, char c)
{
	size_t	i;
	size_t	n;

	i = 0;
	n = 0;
	if (c == '\0')
		return (1);
	while (s && s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
			n++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (n);
}

char			**ft_strsplit(char const *s, char c)
{
	size_t	n;
	size_t	i;
	size_t	j;
	char	**res;

	i = 0;
	n = 0;
	if (!(res = (char **)malloc(sizeof(char *) * (ft_nb_line(s, c) + 1))))
		return (NULL);
	while (s && s[i] && s != 0)
	{
		while (s[i] && s[i] == c)
			i++;
		j = 0;
		while (s[i + j] && s[i + j] != c)
			j++;
		if (j)
		{
			if (!(res[n++] = ft_strsub(s, (unsigned int)i, j)))
				return (NULL);
			i = i + j;
		}
	}
	res[n] = 0;
	return (res);
}
