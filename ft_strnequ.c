/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwen <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/22 03:28:44 by zwen              #+#    #+#             */
/*   Updated: 2018/04/25 13:44:10 by zwen             ###   ########.fr       */
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
	i = n;
	if (i)
		return (ft_strncmp(s1, s2, i) ? 0 : 1);
	return (1);
}
