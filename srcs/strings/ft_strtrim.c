/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 20:09:37 by mmosca            #+#    #+#             */
/*   Updated: 2022/05/19 20:11:59 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incs/libft.h"

static bool	is_charset( const char c, const char *set )
{
	uint32_t	len;

	len = ft_strlen(set);
	while (len--)
		if (c == set[len])
			return (true);
	return (false);
}

char	*ft_strtrim( const char *s1, const char *set )
{
	uint32_t	len;
	char		*s;

	if (!s1 || !set)
		return (NULL);
	while (is_charset((char) *s1, set))
		s1++;
	len = ft_strlen(s1);
	while (len != 0 && is_charset(s1[len - 1], set))
		len--;
	s = ft_calloc(len + 1, sizeof(char));
	if (!s)
		return (NULL);
	while (len--)
		s[len] = s1[len];
	return (s);
}
