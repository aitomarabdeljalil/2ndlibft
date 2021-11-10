/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syakoubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 14:52:24 by syakoubi          #+#    #+#             */
/*   Updated: 2021/11/10 15:48:24 by syakoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*tail;
	t_list	*new;

	if (f == NULL || del == NULL)
		return (NULL);
	head = NULL;
	tail = NULL;
	while (lst)
	{
		new = ft_lstnew(f(lst->content));
		if (new == NULL)
			break ;
		if (head == NULL)
			head = new;
		else
			tail->next = new;
		tail = new;
		lst = lst->next;
	}
	if (lst != NULL)
		ft_lstclear(&head, del);
	return (head);
}
