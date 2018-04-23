/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwen <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/22 18:47:11 by zwen              #+#    #+#             */
/*   Updated: 2018/04/22 18:58:25 by zwen             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	register char	*ret;
	register char	*ps1;
	register char	*ps2;
	register char	*ptr;

	if (!s1 || !s2)
		return (NULL);
	ps1 = (char *)s1;
	ps2 = (char *)s2;
	ret = (char *)malloc(sizeof(*ret) * (ft_strlen(ps1) + ft_strlen(ps2) + 1));
	if (ret)
	{
		ptr = ret;
		while (*ps1)
			*ptr++ = *ps1++;
		while (*ps2)
			*ptr++ = *ps2++;
		*ptr = '\0';
		return (ret);
	}
	return (NULL);
}
