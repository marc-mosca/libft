/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 12:51:49 by mmosca            #+#    #+#             */
/*   Updated: 2022/05/15 12:54:02 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incs/libft.h"

int32_t	ft_memcmp( const void *s1, const void *s2, uint32_t n )
{
	while (n--)
	{
		if (*(unsigned char *) s1 - *(unsigned char *) s2 != 0)
			return (*(unsigned char *) s1 - *(unsigned char *) s2);
		s1++;
		s2++;
	}
	return (0);
}
