/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 14:53:57 by ade-beco          #+#    #+#             */
/*   Updated: 2023/11/07 18:46:36 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*out;
	t_list	*new;

	if (!f || !del)
		return (NULL);
	out = NULL;
	while (lst)
	{
		new = ft_lstnew((*f)(lst->content));
		if (!new)
		{
			while (out)
			{
				new = out->next;
				del(out->content);
				free(out);
				out = new;
			}
			lst = NULL;
			return (NULL);
		}
		ft_lstadd_back(&out, new);
		lst = lst->next;
	}
	return (out);
}
