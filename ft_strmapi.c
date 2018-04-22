/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwen <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/22 02:27:30 by zwen              #+#    #+#             */
/*   Updated: 2018/04/22 02:58:28 by zwen             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	register char	*ptr;
	register char	*ret;
	register int	i;

	if (!s || !f)
		return (NULL);
	ret = (char *)malloc(sizeof(*ret) * (ft_strlen(s) + 1));
	if (ret)
	{
		ptr = (char *)s;
		i = -1;
		while (ptr[++i])
			ret[i] = f(i, ptr[i]);
		ret[i] = '\0';
		return (ret);
	}
	return (NULL);
}
