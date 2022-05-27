/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 19:59:23 by mmosca            #+#    #+#             */
/*   Updated: 2022/05/19 20:01:07 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incs/libft.h"

uint32_t	ft_strlcat( char *dst, const char *src, uint32_t dstsize )
{
	uint16_t	i;
	uint16_t	j;

	i = 0;
	while (dst[i] != '\0' && i < dstsize)
		i++;
	j = 0;
	while (src[j] != '\0' && (i + j + 1) < dstsize)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i != dstsize)
		dst[i + j] = '\0';
	return (ft_strlen(src) + i);
}
