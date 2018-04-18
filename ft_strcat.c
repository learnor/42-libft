/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwen <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/18 10:42:35 by zwen              #+#    #+#             */
/*   Updated: 2018/04/18 11:01:43 by zwen             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *restrict s1, const char *restrict s2)
{
	register int n1;
	register int n2;

	n1 = ft_strlen(s1);
	n2 = ft_strlen(s2);
	n2++;
	while (n2-- > 0)
		s1[n1 + n2] = s2[n2];
	return (s1);
}
