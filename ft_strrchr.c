/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwen <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/19 12:06:19 by zwen              #+#    #+#             */
/*   Updated: 2018/04/19 12:30:18 by zwen             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	register const char *ptr;

	ptr = s;
	while (*ptr)
		ptr++;
	if (c == '\0')
		return ((char *)ptr);
	while (ptr-- != s)
		if (*ptr == c)
			return ((char *)ptr);
	return (NULL);
}
