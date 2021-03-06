/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 10:36:25 by mmosca            #+#    #+#             */
/*   Updated: 2022/05/16 17:05:43 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incs/libft.h"

uint8_t	ft_isalnum( uint8_t c )
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
