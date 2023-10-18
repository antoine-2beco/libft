/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 18:21:30 by ade-beco          #+#    #+#             */
/*   Updated: 2023/10/17 20:00:22 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void *ft_memset(void *b, int c, size_t len)
{
    char	*p;

	p = (char *)b;
    while (len > 0)
    {
        p[len - 1] = c;
        len--;
    }
    return (b);
}