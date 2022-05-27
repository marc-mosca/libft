/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 17:50:43 by mmosca            #+#    #+#             */
/*   Updated: 2022/05/19 14:14:34 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incs/libft.h"

uint32_t	ft_strlen( const char *s )
{
	return (ft_strlen_charset(s, '\0'));
}

uint32_t	ft_strlen_charset( const char *s, uint8_t c )
{
	uint32_t	i;

	if (!s)
		return (0);
	i = 0;
	while (s[i] != '\0' && s[i] != c)
		i++;
	return (i);
}
