/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 09:02:57 by mmosca            #+#    #+#             */
/*   Updated: 2022/05/15 12:22:38 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incs/libft.h"

void	ft_putendl( const char *s )
{
	ft_putendl_fd(1, s);
}

void	ft_putendl_fd( int32_t fd, const char *s )
{
	ft_putstr_fd(fd, s);
	ft_putchar_fd(fd, '\n');
}
