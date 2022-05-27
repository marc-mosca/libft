/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 12:47:43 by mmosca            #+#    #+#             */
/*   Updated: 2022/05/15 12:50:28 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incs/libft.h"

void	*ft_memchr( const void *s, u_int8_t c, uint32_t n )
{
	while (n--)
	{
		if (*(unsigned char *) s == c)
			return ((unsigned char *) s);
		s++;
	}
	return (NULL);
}
