/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 14:57:11 by ade-beco          #+#    #+#             */
/*   Updated: 2023/10/18 15:13:27 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*pdst;
	char	*psrc;

	pdst = dst;
	psrc = (char *)src;
	while (n > 0 && (dst != 0 || src != 0))
	{
		pdst[n - 1] = psrc[n - 1];
		n--;
	}
	return (dst);
}
