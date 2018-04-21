/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwen <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/20 16:11:11 by zwen              #+#    #+#             */
/*   Updated: 2018/04/20 22:05:50 by zwen             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	register char	*ptr;
	register int	n;

	n = size;
	ptr = (char *)malloc(sizeof(*ptr) * size);
	if (ptr)
	{
		while (n--)
			ptr[n] = 0;
		return (ptr);
	}
	return (NULL);
}
