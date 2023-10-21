/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 16:47:43 by ade-beco          #+#    #+#             */
/*   Updated: 2023/10/21 16:58:06 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nb;
	int		neg;
	char	temp;

	nb = n;
	neg = 1;
	if (nb == 0)
		write(fd, "0", 1);
	if (nb < 0)
	{
		neg = -1;
		nb *= -1;
	}
	while (nb > 0)
	{
		temp = (char)(nb % 10) + '0';
		write(fd, &temp, sizeof(temp));
		nb /= 10;
	}
	if (neg < 0)
		write(fd, "-", 1);
}
