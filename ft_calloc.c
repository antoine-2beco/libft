/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 17:05:48 by ade-beco          #+#    #+#             */
/*   Updated: 2023/10/31 13:07:00 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*tab;

	if ((size != 0 && ((count * size) / size) != count)
		|| (size >= 2147483647 && count >= 2147483647))
		return (NULL);
	tab = malloc(size * count);
	if (!tab)
		return (NULL);
	ft_bzero(tab, size * count);
	return (tab);
}
