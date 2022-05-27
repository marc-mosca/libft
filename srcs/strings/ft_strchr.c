/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 12:15:22 by mmosca            #+#    #+#             */
/*   Updated: 2022/05/16 12:34:14 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incs/libft.h"

char	*ft_strchr( const char *s, uint8_t c )
{
	uint16_t	i;
	uint32_t	size;

	i = 0;
	size = ft_strlen(s);
	while (i <= size)
	{
		if (s[i] == c)
			return ((char *) &s[i]);
		i++;
	}
	return (NULL);
}

char	*ft_strrchr( const char *s, uint8_t c )
{
	uint32_t	size;

	size = ft_strlen(s);
	while (size--)
		if (s[size] == c)
			return ((char *) &s[size]);
	return (NULL);
}
