/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 13:55:57 by mmosca            #+#    #+#             */
/*   Updated: 2022/05/19 14:02:30 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incs/libft.h"

char	*ft_strdup( const char *s )
{
	return (ft_strndup(s, ft_strlen(s)));
}

char	*ft_strndup( const char *s, uint32_t n )
{
	char	*p;

	p = ft_calloc(n + 1, sizeof(char));
	if (!p)
		return (NULL);
	ft_strlcpy(p, s, n + 1);
	return (p);
}
