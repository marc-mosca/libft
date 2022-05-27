/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 20:06:24 by mmosca            #+#    #+#             */
/*   Updated: 2022/05/19 20:08:17 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incs/libft.h"

char	*ft_strnstr( const char *haystack, const char *needle, uint32_t len )
{
	uint16_t	i;
	uint16_t	j;

	i = 0;
	if (!needle[0])
		return ((char *) haystack);
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		while (needle[j] != '\0' && haystack[i + j] == needle[j]
			&& (i + j) < len)
			j++;
		if (needle[j] == '\0')
			return ((char *) haystack);
		i++;
	}
	return (0);
}
