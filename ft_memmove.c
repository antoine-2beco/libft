/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 16:04:45 by ade-beco          #+#    #+#             */
/*   Updated: 2023/10/18 16:09:00 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libc.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned int	i;
	char			*pdst;
	char			*psrc;

	i = 0;
	pdst = dst;
	psrc = (char *)src;
	while (i < len && (dst != 0 || src != 0))
	{
		pdst[i] = psrc[i];
		i++;
	}
	return (dst);
}
