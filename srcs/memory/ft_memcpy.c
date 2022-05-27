/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 12:57:57 by mmosca            #+#    #+#             */
/*   Updated: 2022/05/15 13:06:04 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incs/libft.h"

void	*ft_memcpy( void *dst, const void *src, uint32_t n )
{
	void	*dest;

	if (!dst && !src)
		return (NULL);
	dest = dst;
	while (n--)
	{
		*(unsigned char *) dst = *(unsigned char *) src;
		dst++;
		src++;
	}
	return (dest);
}
