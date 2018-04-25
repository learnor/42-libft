/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwen <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/18 08:43:04 by zwen              #+#    #+#             */
/*   Updated: 2018/04/24 21:34:12 by zwen             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	register int	size;
	register char	*dupstr;

	size = ft_strlen(s1) + 1;
	dupstr = (char *)malloc(sizeof(*dupstr) * size);
	if (!dupstr)
		return (NULL);
	ft_memcpy(dupstr, s1, size);
	return (dupstr);
}
