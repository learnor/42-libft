/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwen <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/23 23:35:20 by zwen              #+#    #+#             */
/*   Updated: 2018/04/25 00:48:34 by zwen             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*lst;

	if ((lst = (t_list *)malloc(sizeof(*lst))))
	{
		lst->content_size = content ? content_size : 0;
		if ((lst->content = (void *)malloc(sizeof(content))) && content)
			ft_memcpy(lst->content, content, content_size);
		else
		{
			free(lst);
			lst->content = NULL;
		}
		lst->next = NULL;
	}
	return (lst);
}
