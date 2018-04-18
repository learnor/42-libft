/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwen <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/18 09:16:02 by zwen              #+#    #+#             */
/*   Updated: 2018/04/18 09:42:24 by zwen             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	register size_t	i;

	i = 0;
	while (i < len)
	{
		if (src[i])
			dst[i] = src[i];
		else
		{
			dst[i] = src[i];
			break ;
		}
		i++;
	}
	while (++i < len)
		dst[i] = '\0';
	return (dst);
}
