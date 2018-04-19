/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwen <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/18 22:33:10 by zwen              #+#    #+#             */
/*   Updated: 2018/04/19 02:04:53 by zwen             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	register char	*ptr;

	ptr = (char *)s;
	while (n && *ptr != c)
	{
		n--;
		ptr++;
	}
	if (n)
		return (void *)ptr;
	return (NULL);
}
