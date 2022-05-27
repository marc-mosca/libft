/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 11:33:40 by mmosca            #+#    #+#             */
/*   Updated: 2022/05/15 11:36:01 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incs/libft.h"

uint8_t	ft_isprint( uint8_t c )
{
	return (c >= MIN_ASCII_CHAR_PRINTABLE && c <= MAX_ASCII_CHAR_PRINTABLE);
}
