/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwen <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/18 11:08:13 by zwen              #+#    #+#             */
/*   Updated: 2018/04/24 23:18:31 by zwen             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *restrict s1, const char *restrict s2, size_t n)
{
	register size_t	len;

	len = ft_strlen(s2);
	ft_memcpy(s1 + ft_strlen(s1), s2, len < n ? len + 1 : n);
	return (s1);
}
