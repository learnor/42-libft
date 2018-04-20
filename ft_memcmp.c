/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwen <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/19 02:09:37 by zwen              #+#    #+#             */
/*   Updated: 2018/04/20 14:43:32 by zwen             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	register unsigned char	*ps1;
	register unsigned char	*ps2;
	register size_t			i;

	ps1 = (unsigned char *)s1;
	ps2 = (unsigned char *)s2;
	i = n;
	while (i-- && *ps1++ == *ps2++)
		;
	if (i)
	{
		ps1--;
		ps2--;
	}
	if (*ps1 > *ps2)
		return (1);
	if (*ps1 < *ps2)
		return (-1);
	return (0);
}
