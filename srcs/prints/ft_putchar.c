/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 09:21:39 by mmosca            #+#    #+#             */
/*   Updated: 2022/05/14 23:17:23 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incs/libft.h"

void	ft_putchar( char c )
{
	ft_putchar_fd(1, c);
}

void	ft_putchar_fd( int32_t fd, char c )
{
	if (fd < 0)
		return ;
	write(fd, &c, 1);
}
