/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwen <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/22 19:36:29 by zwen              #+#    #+#             */
/*   Updated: 2018/04/25 11:14:44 by zwen             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_wcount(char *s, char c)
{
	int		count;

	count = 0;
	if (*s && *s != c)
		count++;
	while (*++s)
		if (*s != c && *(s - 1) == c)
			count++;
	return (count);
}

static	int	ft_ccount(char *s, char c)
{
	int		count;

	count = 0;
	while (*s == c)
		s++;
	while (*s && *s != c)
	{
		count++;
		s++;
	}
	return (count);
}

char		**ft_strsplit(char const *s, char c)
{
	register char	*p;
	register char	**ret;
	register int	asize;
	register int	i;
	register int	wsize;

	if (!s)
		return (NULL);
	p = (char *)s;
	asize = ft_wcount(p, c);
	ret = (char **)malloc(sizeof(*ret) * (asize + 1));
	if (!ret)
		return (NULL);
	i = -1;
	ret[asize] = NULL;
	while (++i < asize)
	{
		wsize = ft_ccount(p, c);
		while (*p == c)
			p++;
		ret[i] = ft_strsub(p, 0, wsize);
		while (*p && *p != c)
			p++;
	}
	return (ret);
}
