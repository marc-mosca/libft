/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 12:10:24 by mmosca            #+#    #+#             */
/*   Updated: 2022/05/15 12:12:17 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incs/libft.h"

void	*ft_memset( void *b, uint8_t c, uint32_t len )
{
	void	*buffer;

	buffer = b;
	while (len--)
	{
		*(unsigned char *) b = c;
		b++;
	}
	return (buffer);
}
