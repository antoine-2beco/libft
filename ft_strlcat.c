/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 16:42:29 by ade-beco          #+#    #+#             */
/*   Updated: 2023/10/19 16:48:44 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	y;
	size_t	dest_len;

	y = 0;
	dest_len = ft_strlen(dest);
	i = dest_len;
	while ((i < (dstsize - 1)) && (src[y] != '\0') && (dstsize != 0))
	{
		dest[i] = src[y];
		y++;
		i++;
	}
	dest[i] = '\0';
	if ((dstsize < 3) && (src[0] == '\0'))
		return (dstsize);
	if (dstsize < i)
		return (ft_strlen(src) + dstsize);
	return (dest_len + ft_strlen(src)); 
}
