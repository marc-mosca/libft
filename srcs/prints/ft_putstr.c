/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 17:52:43 by mmosca            #+#    #+#             */
/*   Updated: 2022/05/15 09:09:28 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incs/libft.h"

void	ft_putstr( const char *s )
{
	ft_putstr_fd(1, s);
}

void	ft_putstr_fd( int32_t fd, const char *s )
{
	if (fd < 0 || !s)
		return ;
	write(fd, s, ft_strlen(s));
}
