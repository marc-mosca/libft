/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 13:21:12 by mmosca            #+#    #+#             */
/*   Updated: 2022/05/16 11:26:36 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incs/libft.h"

void	*ft_calloc( uint32_t count, uint32_t size )
{
	char		*p;
	uint32_t	size_total;

	size_total = count + size;
	p = malloc(size_total);
	if (!p)
		return (NULL);
	ft_bzero(p, size_total);
	return (p);
}
