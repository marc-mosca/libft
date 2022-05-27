/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 11:55:50 by mmosca            #+#    #+#             */
/*   Updated: 2022/05/16 12:05:42 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incs/libft.h"

int32_t	ft_atoi( const char *s )
{
	uint32_t	i;
	int32_t		result;
	int8_t		sign;

	i = 0;
	result = 0;
	sign = 1;
	while (ft_isspace(s[i]))
		i++;
	if (s[i] == '-' || s[i] == '+')
		if (s[i++] == '-')
			sign *= (-1);
	while (ft_isdigit(s[i]))
		result = result * 10 + (s[i++] - '0');
	return (result * sign);
}
