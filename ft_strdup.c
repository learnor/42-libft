/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwen <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/18 08:43:04 by zwen              #+#    #+#             */
/*   Updated: 2018/04/18 09:00:51 by zwen             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		size;
	char	*dupstr;

	size = ft_strlen(s1);
	dupstr = (char *)malloc(sizeof(*dupstr) * (size + 1));
	if (dupstr)
	{
		dupstr[size] = '\0';
		while (--size >= 0)
			dupstr[size] = s1[size];
		return (dupstr);
	}
	else
		return (NULL);
}
