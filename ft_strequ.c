/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwen <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/22 02:59:51 by zwen              #+#    #+#             */
/*   Updated: 2018/04/22 03:26:20 by zwen             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strequ(char const *s1, char const *s2)
{
	register char	*ps1;
	register char	*ps2;

	if (!s1 || !s2)
		return (0);
	ps1 = (char *)s1;
	ps2 = (char *)s2;
	while (*ps1)
		if (*ps1++ != *ps2++)
			return (0);
	if (*ps2)
		return (0);
	return (1);
}
