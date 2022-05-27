/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memory.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 12:13:14 by mmosca            #+#    #+#             */
/*   Updated: 2022/05/27 14:25:55 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MEMORY_H
# define MEMORY_H

/**
 * Writes n zeroed bytes to the string s. If n is zero, does nothing.
 * @param s the buffer to fill with zeroed bytes
 * @param n the number of bytes of zeroed bytes to write in s
 */
void	ft_bzero( void *s, uint32_t n );

/**
 * Allocates enough soace for count objects that are size bytes of memory each
 * and returns a pointer to the allocated memory. The allocated memory is filled
 * with bytes of value zero.
 * @param count the number of consecutive element to reserve in the memory block
 * @param size the size (in number of bytes) of an element
 * @return if successful, return a pointer to allocated memory, if there is an
 * error, they return NULL pointer
 */
void	*ft_calloc( uint32_t count, uint32_t size );

/**
 * Searches for the first occurrence of a value typed unsigned char, in memory
 * block.
 * @param s a pointer indicating the address of the memory block to use for the
 * search
 * @param c the numerical code of the byte to search in the memory block
 * @param n indicates the size of the memory block in which to search
 * @return if the searched character has found, returns a pointer to its first
 * occurrence, if nots returns the value NULL
 */
void	*ft_memchr( const void *s, u_int8_t c, uint32_t n );

/**
 * Compares the contents of two memory blocks.
 * @param s1 the address of the first memory block to compare
 * @param s2 the address of the second memory block to compare
 * @param n the maximum number of bytes to compare
 * @return if the return value is negative, the first byte that differs between
 * the two blocks is smaller in the first block, if the return value is NULL,
 * the two blocks have strictly identical contents and if the return value is
 * positive, the first byte that differs between the two blocks is larger in the
 * first block
 */
int32_t	ft_memcmp( const void *s1, const void *s2, uint32_t n );

/**
 * Copies a block of memory specified by the source parameter and whose size is
 * specified by the size parameter, to a new location designated by the
 * destination parameter.
 * @param dst the address of the memory block to receive the data to be copied
 * @param src the address of the memory block to duplicate
 * @param n the number of bytes to duplicate
 * @return the address of the destination memory block
 */
void	*ft_memcpy( void *dst, const void *src, uint32_t n );

/**
 * Free and set the parameter to NULL.
 * @param p the pointer to clean
 */
void	ft_memdel( void **p );

/**
 * Copies a memory block specified by the source parameter to a new location
 * designated by the destination parameter, accepting that the two memory areas
 * may overlap.
 * @param dst the address of memory block to receive the data to be copied
 * @param src the address of memory block to duplicate
 * @param len the number of bytes to duplicate
 * @return the address of the destination memory block
 */
void	*ft_memmove( void *dst, const void *src, uint32_t len );

/**
 * Writes len bytes of value c to the string b.
 * @param b the buffer to fill with the c value
 * @param c the character to insert to b
 * @param len the number of bytes of value c to write in b
 * @return returns its first argument
 */
void	*ft_memset( void *b, uint8_t c, uint32_t len );

#endif
