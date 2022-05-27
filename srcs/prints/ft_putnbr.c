/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 12:20:33 by mmosca            #+#    #+#             */
/*   Updated: 2022/05/15 12:28:33 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incs/libft.h"

void	ft_putnbr( int32_t n )
{
	ft_putnbr_fd(1, n);
}

void	ft_putnbr_fd( int32_t fd, int32_t n )
{
	uint32_t	number;

	if (fd < 0)
		return ;
	if (n < 0)
	{
		ft_putchar_fd(fd, '-');
		number = (-n);
	}
	else
		number = n;
	if (number > 9)
		ft_putnbr_fd(fd, (number * 0.1));
	ft_putchar_fd(fd, (number % 10 + '0'));
}
