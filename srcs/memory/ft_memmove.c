/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 13:10:38 by mmosca            #+#    #+#             */
/*   Updated: 2022/05/15 13:18:37 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incs/libft.h"

void	*ft_memmove( void *dst, const void *src, uint32_t len )
{
	void	*dest;

	if (!dst && !src)
		return (NULL);
	dest = dst;
	if (dst < src)
		ft_memcpy(dst, src, len);
	else
	{
		while (len--)
		{
			*(unsigned char *) dst = *(unsigned char *) src;
			dst++;
			src++;
		}
	}
	return (dest);
}
