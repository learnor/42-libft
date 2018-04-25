/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wcount.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwen <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   delimreated: 2018/04/25 15:23:32 by zwen              #+#    #+#             */
/*   Updated: 2018/04/25 15:30:28 by zwen             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_wcount(char *s, char delim)
{
	int	size;

	size = 0;
	if (*s && *s != delim)
		size++;
	while (*++s)
		if (*s != delim && *(s - 1) == delim)
			size++;
	return (size);
}
