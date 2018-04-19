/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwen <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/19 12:30:53 by zwen              #+#    #+#             */
/*   Updated: 2018/04/19 15:51:04 by zwen             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	register int	i;
	register char	*hptr;
	register char	*nptr;

	hptr = (char *)haystack;
	nptr = (char *)needle;
	if (!(*nptr))
		return (hptr);
	while (*hptr)
	{
		if (*hptr == *nptr)
		{
			i = 0;
			while (nptr[i])
				if (hptr[i] == nptr[i])
					i++;
				else
					break ;
			if (nptr[i] == '\0')
				return (hptr);
		}
		hptr++;
	}
	return (NULL);
}
