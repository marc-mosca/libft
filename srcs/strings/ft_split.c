/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 13:51:53 by mmosca            #+#    #+#             */
/*   Updated: 2022/05/19 14:30:53 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incs/libft.h"

static uint32_t	word_count( char *s, char c )
{
	uint32_t	len;
	uint32_t	words_nbr;

	words_nbr = 0;
	while (*s)
	{
		while (*s != '\0' && *s == c)
			s++;
		len = ft_strlen_charset(s, c);
		s += len;
		if (len)
			words_nbr++;
	}
	return (words_nbr);
}

static void	clean_memory( char ***s, uint32_t i )
{
	uint16_t	j;

	if (!(*s))
		return ;
	j = 0;
	while (j < i)
	{
		free((*s)[j]);
		j++;
	}
	free(*s);
	s = NULL;
}

char	**ft_split( const char *s, char c )
{
	char		**str;
	uint16_t	i;
	uint32_t	words_nbr;
	uint32_t	word_len;

	if (!s)
		return (NULL);
	words_nbr = word_count((char *)s, c);
	str = ft_calloc(words_nbr + 1, sizeof(char *));
	if (!str)
		return (NULL);
	i = 0;
	while (i < words_nbr)
	{
		while (*s && *s == c)
			s++;
		word_len = ft_strlen_charset(s, c);
		str[i] = ft_strndup(s, word_len);
		if (!str[i])
			clean_memory(&str, i);
		s += word_len;
		i++;
	}
	return (str);
}
