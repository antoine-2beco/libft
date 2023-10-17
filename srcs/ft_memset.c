/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 18:21:30 by ade-beco          #+#    #+#             */
/*   Updated: 2023/10/17 18:49:44 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *b, int c, size_t len)
{
    size_t  i;

    i = 0;
    while (len < 0)
    {
        *(unsigned char*)b + i = (unsigned char)c;
        i++;
        len--;
    }
    return (b);
}