/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwen <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/21 01:26:00 by zwen              #+#    #+#             */
/*   Updated: 2018/04/22 02:26:11 by zwen             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	register char	*ptr;
	register char	*ret;
	register int	i;

	ret = (char *)malloc(sizeof(*ret) * (ft_strlen(s) + 1));
	if (s && ret)
	{
		ptr = (char *)s;
		i = -1;
		while (ptr[++i])
			ret[i] = f(ptr[i]);
		ret[i] = '\0';
		return (ret);
	}
	return (NULL);
}
