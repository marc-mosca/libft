/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prints.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 11:17:35 by mmosca            #+#    #+#             */
/*   Updated: 2022/05/18 19:04:21 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTS_H
# define PRINTS_H

/**
 * Output the character passed in parameter to the standard file descriptor.
 * @param c the character to output
 */
void	ft_putchar( char c );

/**
 * Output the character passed in parameter to the given file descriptor.
 * @param fd the file descriptor on which to write
 * @param c the character to output
 */
void	ft_putchar_fd( int32_t fd, char c );

/**
 * Output the string passed in parameter to the standard file descriptor,
 * followed by a new line character.
 * @param s the string to output
 */
void	ft_putendl( const char *s );

/**
 * Output the string passed in parameter to the given file descriptor, followed
 * by a new line character.
 * @param fd the file descriptor on which to write
 * @param s the string to output
 */
void	ft_putendl_fd( int32_t fd, const char *s );

/**
 * Output the number passed in parameter to the standard file descriptor.
 * @param n the number to output
 */
void	ft_putnbr( int32_t n );

/**
 * Output the number passed in parameter to the given file descriptor.
 * @param fd the file descriptor on which to write
 * @param n the number to output
 */
void	ft_putnbr_fd( int32_t fd, int32_t n );

/**
 * Output the string passed in paremeter to the standard file descriptor.
 * @param s the string to output
 */
void	ft_putstr( const char *s );

/**
 * Output the string passed in paremeter to the standard file descriptor.
 * @param fd the file descriptor on whcih to write
 * @param s the string to output
 */
void	ft_putstr_fd( int32_t fd, const char *s );

#endif
