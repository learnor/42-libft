/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwen <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/20 00:29:12 by zwen              #+#    #+#             */
/*   Updated: 2018/04/20 14:48:14 by zwen             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	register int		res;
	register int		neg;
	register const char	*s;

	s = str;
	while (*s && ft_is_space(*s))
		s++;
	neg = 0;
	if (*s == '+' || *s == '-')
	{
		if (*s == '-')
			neg = 1;
		s++;
	}
	res = 0;
	while (*s >= '0' && *s <= '9')
	{
		if (neg)
			res = res * 10 - (*s - '0');
		else
			res = res * 10 + (*s - '0');
		s++;
	}
	return (res);
}
