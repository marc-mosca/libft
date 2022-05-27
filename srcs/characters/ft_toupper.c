/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 11:24:29 by mmosca            #+#    #+#             */
/*   Updated: 2022/05/16 11:25:10 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incs/libft.h"

uint8_t	ft_toupper( uint8_t c )
{
	if (ft_islower(c))
		c -= 32;
	return (c);
}
