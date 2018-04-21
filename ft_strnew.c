/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwen <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/21 00:13:21 by zwen              #+#    #+#             */
/*   Updated: 2018/04/21 00:45:08 by zwen             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	register char	*ptr;
	register size_t	n;

	n = size + 1;
	ptr = (char *)malloc(sizeof(*ptr) * n);
	if (ptr)
	{
		while (n)
			ptr[--n] = '\0';
		return (ptr);
	}
	return (NULL);
}
