/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 16:54:44 by mmosca            #+#    #+#             */
/*   Updated: 2022/05/16 17:03:26 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incs/libft.h"

static uint8_t	nbrlen( int32_t n )
{
	uint8_t	len;

	len = 1;
	if (n < 0)
		n = (-n);
	while (n > 9)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa( int32_t n )
{
	uint8_t	len;
	char	*s;

	if (n == INT32_MIN)
		return (ft_strdup("-2147483648"));
	len = nbrlen(n);
	if (n < 0)
	{
		n = (-n);
		len++;
	}
	s = ft_calloc(len + 1, sizeof(char));
	if (!s)
		return (NULL);
	while (n > 9)
	{
		s[len - 1] = (n % 10) + '0';
		len--;
		n /= 10;
	}
	s[len - 1] = (n % 10) + '0';
	len--;
	if (len > 0)
		s[len - 1] = '-';
	return (s);
}
