/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_to_string.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 11:32:37 by ade-beco          #+#    #+#             */
/*   Updated: 2024/06/25 17:06:03 by ade-beco         ###   ########.fr       */
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
	while (temp)
	{
		content[i] = temp->content;
		temp = temp->next;
		i++;
	}
	content[i] = NULL;
	return (content);
}
