/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstcreate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwen <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/24 00:10:04 by zwen              #+#    #+#             */
/*   Updated: 2018/04/24 01:08:45 by zwen             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_listcreate(void const *content)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(*node));
	node->content = (void *)content;
	node->next = NULL;
	node->content_size = sizeof(*content);
	return (node);
}
