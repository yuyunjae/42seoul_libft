/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuyu <yuyu@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 20:33:28 by yuyu              #+#    #+#             */
/*   Updated: 2023/11/04 21:42:05 by yuyu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*node;

	if (!(*lst) || !del)
		return ;
	while ((*lst)->next)
	{
		node = (*lst);
		del(node->content);
		*lst = (*lst)->next;
		free(node);
	}
	node = *lst;
	del(node->content);
	*lst = 0;
	free(node);
}
