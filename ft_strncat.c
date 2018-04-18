/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwen <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/18 11:08:13 by zwen              #+#    #+#             */
/*   Updated: 2018/04/18 11:21:23 by zwen             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *restrict s1, const char *restrict s2, size_t n)
{
	register size_t	n1;
	register size_t	n2;

	n1 = ft_strlen(s1);
	n2 = ft_strlen(s2);
	n = n2 < n ? n2 : n;
	s1[n1 + n] = '\0';
	while (n-- > 0)
		s1[n1 + n] = s2[n];
	return (s1);
}
