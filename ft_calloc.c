/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 17:05:48 by ade-beco          #+#    #+#             */
/*   Updated: 2023/10/20 17:15:30 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned long	i;
	char			*tab;

	i = 0;
	tab = malloc(size * count);
	if (!tab)
		return (NULL);
	while (i < (size * count))
		tab[i++] = 0;
	return (tab);
}
