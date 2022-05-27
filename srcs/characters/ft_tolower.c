/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 11:19:32 by mmosca            #+#    #+#             */
/*   Updated: 2022/05/16 11:20:37 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incs/libft.h"

uint8_t	ft_tolower( uint8_t c )
{
	if (ft_isupper(c))
		c += 32;
	return (c);
}