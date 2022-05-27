/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_open.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 20:19:08 by mmosca            #+#    #+#             */
/*   Updated: 2022/05/19 20:21:56 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incs/libft.h"

int32_t	ft_open( const char *file )
{
	int32_t	fd;

	fd = open(file, O_DIRECTORY);
	if (fd != -1)
	{
		ft_close(fd);
		ft_putstr_fd(2, "File is a directory.");
		return (-1);
	}
	fd = open(file, O_RDONLY);
	if (fd == -1)
		ft_putstr_fd(2, "File can't be opened.");
	return (fd);
}
