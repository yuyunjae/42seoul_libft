/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuyu <yuyu@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 20:48:38 by yuyu              #+#    #+#             */
/*   Updated: 2023/11/04 22:40:20 by yuyu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*dummy1;
	t_list	*dummy2;

	if (!lst || !(*f) || !del)
		return (0);
	dummy1 = (t_list *)malloc(sizeof(t_list));
	if (!dummy1)
		return (0);
	head = dummy1;
	dummy2 = lst;
	while (dummy2)
	{
		dummy1->next = ft_lstnew(f(dummy2->content));
		if (!dummy1->next)
		{
			ft_lstclear(&head, del);
			return (0);
		}
		dummy2 = dummy2->next;
		dummy1 = dummy1->next;
	}
	dummy1 = head->next;
	free(head);
	return (dummy1);
}
