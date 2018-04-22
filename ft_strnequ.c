/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwen <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/22 03:28:44 by zwen              #+#    #+#             */
/*   Updated: 2018/04/22 03:48:39 by zwen             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	register char	*ps1;
	register char	*ps2;
	register size_t	i;

	if (!s1 || !s2)
		return (0);
	ps1 = (char *)s1;
	ps2 = (char *)s2;
	i = n + 1;
	while (*++ps1 == *++ps2 && --i)
		if (!*ps1)
			return (1);
	if (i)
		return (0);
	return (1);
}
