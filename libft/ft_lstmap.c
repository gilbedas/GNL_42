/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghery <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 20:42:47 by ghery             #+#    #+#             */
/*   Updated: 2015/12/03 20:50:58 by ghery            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	t_list	*pnew;

	new = NULL;
	pnew = NULL;
	while (lst != NULL)
	{
		if (new == NULL)
		{
			new = f(lst);
			pnew = new;
		}
		else
		{
			pnew->next = f(lst);
			pnew = new->next;
		}
		lst = lst->next;
	}
	return (new);
}
