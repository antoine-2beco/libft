/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_to_lst.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 11:00:27 by ade-beco          #+#    #+#             */
/*   Updated: 2024/09/16 11:32:17 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnewdup(void *content)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(*node));
	if (!node)
		return (NULL);
	node->content = ft_strdup(content);
	node->next = NULL;
	return (node);
}

t_list	*ft_string_to_lst(char **content)
{
	int		i;
	char	*cpy;
	t_list	*lst;
	t_list	*node;

	i = 0;
	cpy = NULL;
	if (!*content || !content[0])
		return (NULL);
	while (content[i])
	{
		node = ft_lstnewdup(content[i]);
		if (!node)
			return (NULL);
		if (i == 0)
			lst = node;
		else
			ft_lstadd_back(&lst, node);
		i++;
	}
	return (lst);
}
