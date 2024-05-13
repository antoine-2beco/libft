/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsmaller.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 16:16:07 by ade-beco          #+#    #+#             */
/*   Updated: 2024/05/13 17:07:32 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strsmaller(char *a, char *b)
{
	int	i;
	int	a_size;
	int	b_size;

	if (!a || !b)
		return (0);
	i = 0;
	a_size = ft_strlen(a);
	b_size = ft_strlen(b);
	while ((a_size > i) && (b_size > i))
	{
		if (a[i] > b[i])
			return (1);
		if (a[i] < b[i])
			return (-1);
		i++;
	}
	if (a_size == b_size)
		return (0);
	if (a_size == i)
		return (-1);
	if (b_size == i)
		return (1);
	return (0);
}
