/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwen <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/18 20:43:43 by zwen              #+#    #+#             */
/*   Updated: 2018/04/24 16:28:24 by zwen             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void * dst, const void * src, size_t n)
{
	register char		*d;
	register const char	*s;

	d = (char *)dst;
	s = (const char *)src;
	while (n--)
		*d++ = *s++;
	return (dst);
}
