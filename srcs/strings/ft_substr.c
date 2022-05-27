/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 20:14:39 by mmosca            #+#    #+#             */
/*   Updated: 2022/05/19 20:17:57 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incs/libft.h"

static int32_t	length_to_copy( const char *s, uint32_t start, uint32_t len )
{
	uint32_t	i;
	uint32_t	length;

	i = 0;
	length = 0;
	while (s[i] != '\0' && length < len)
	{
		if (i >= start)
			length++;
		i++;
	}
	return (length);
}

char	*ft_substr( const char *s, uint32_t start, uint32_t len )
{
	uint16_t	i;
	uint32_t	len_copy;
	char		*str;

	if (!s)
		return (NULL);
	len_copy = length_to_copy(s, start, len);
	str = ft_calloc(len_copy + 1, sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (i < len_copy)
	{
		str[i] = s[start];
		i++;
		start++;
	}
	return (str);
}
