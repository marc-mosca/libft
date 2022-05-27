/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   characters.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 10:39:09 by mmosca            #+#    #+#             */
/*   Updated: 2022/05/23 12:17:13 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTERS_H
# define CHARACTERS_H

/**
 * Tests for any character for which isalpha or isdigit is true.
 * @param c the character to test
 * @return return zero if the character tests false and returns non-zero if the
 * character tests true
 */
uint8_t	ft_isalnum( uint8_t c );

/**
 * Tests for any character for which isupper or islower is true.
 * @param c the character to test
 * @return return zero if the character tests false and returns non-zero if the
 * character tests true
 */
uint8_t	ft_isalpha( uint8_t c );

/**
 * Tests for an ASCII character, which is any character between 0 and 127
 * inclusive.
 * @param c the character to test
 * @return return zero if the character tests false and returns non-zero if the
 * character tests true
 */
uint8_t	ft_isascii( uint8_t c );

/**
 * Tests for a decimal digit character.
 * @param c the character to test
 * @return return zero if the character tests false and returns non-zero if the
 * character tests true
 */
uint8_t	ft_isdigit( uint8_t c );

/**
 * Tests for any lower-case letters.
 * @param c the character to test
 * @return return zero if the character tests false and returns non-zero if the
 * character tests true
 */
uint8_t	ft_islower( uint8_t c );

/**
 * Tests for any printing character, including space.
 * @param c the character to test
 * @return return zero if the character tests false and returns non-zero if the
 * character tests true
 */
uint8_t	ft_isprint( uint8_t c );

/**
 * Tests for any white space character, including space.
 * @param c the character to test
 * @return return zero if the character tests false and returns non-zero if the
 * character tests true
 */
uint8_t	ft_isspace( uint8_t c );

/**
 * Tests for any upper-case letters.
 * @param c the character to test
 * @return return zero if the character tests false and returns non-zero if the
 * character tests true
 */
uint8_t	ft_isupper( uint8_t c );

/**
 * Converts an upper-case letter to the corresponding lower-case letter.
 * @param c the character to convert
 * @return if the argument is an upper-case letter, returns the corresponding
 * lower-case letterm otherwisem the argument is returned unchanged
 */
uint8_t	ft_tolower( uint8_t c );

/**
 * Converts an lower-case letter to the corresponding upper-case letter.
 * @param c the character to convert
 * @return if the argument is an lower-case letter, returns the corresponding
 * upper-case letterm otherwisem the argument is returned unchanged
 */
uint8_t	ft_toupper( uint8_t c );

#endif
