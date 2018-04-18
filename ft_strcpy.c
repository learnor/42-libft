/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwen <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/18 09:03:43 by zwen              #+#    #+#             */
/*   Updated: 2018/04/18 09:12:45 by zwen             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	register int	i;
	int				len;

	len = strlen(src);
	i = -1;
	while (++i <= len)
		dst[i] = src[i];
	return (dst);
}
