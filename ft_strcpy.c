/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwen <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/18 09:03:43 by zwen              #+#    #+#             */
/*   Updated: 2018/04/18 09:45:28 by zwen             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	register size_t	i;
	register size_t	len;

	len = strlen(src);
	i = 0;
	while (i <= len)
	{
		dst[i] = src[i];
		i++;
	}
	return (dst);
}
