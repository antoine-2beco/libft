/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 15:00:21 by ade-beco          #+#    #+#             */
/*   Updated: 2024/05/15 13:25:40 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	size_t	i;

	i = 0;
	while ((s1[i] != '\0') || (s2[i] != '\0'))
	{
		if ((unsigned char)(s1[i]) > (unsigned char)(s2[i]))
			return (1);
		else if ((unsigned char)(s1[i]) < (unsigned char)(s2[i]))
			return (-1);
		i++;
	}
	return (0);
}
