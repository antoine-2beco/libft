/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_to_string.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 11:32:37 by ade-beco          #+#    #+#             */
/*   Updated: 2024/05/21 16:54:08 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_lst_to_string(t_list **lst)
{
	int		i;
	t_list	*temp;
	char	**content;

	i = 0;
	temp = *lst;
	content = (char **)malloc((ft_lstsize(temp) + 1)* sizeof(char *));
	if (!content)
		return (NULL);
	while (temp)
	{
		content[i] = (char *)malloc(ft_strlen(temp->content) * sizeof(char));
		if (!content[i])
			return (NULL);
		content[i] = temp->content;
		temp = temp->next;
		i++;
	}
	content[i] = NULL;
	return (content);
}
