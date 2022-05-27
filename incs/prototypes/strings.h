/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strings.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 18:19:35 by mmosca            #+#    #+#             */
/*   Updated: 2022/05/27 14:48:05 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRINGS_H
# define STRINGS_H

/**
 * Transform a string, representing an interger value into a numerical value of
 * type int.
 * @param s the string to convert to an int type data
 * @return if the string to convert does not contain an integer data, the value
 * zero will be returned, otherwise, a value of type int equivalent to the
 * string passed in parameter will be returned
 */
int32_t		ft_atoi( const char *s );

/**
 * Allocates and returns a string representing the integer received as an
 * argument. Negative numbers must be handled.
 * @param n the integer to convert
 * @return if the allocation fails return NULL, otherwise, return the string
 * representing the integer.
 */
char		*ft_itoa( int32_t n );

/**
 * Allocates and returns an array of strings obtained by splitting 's' using the
 * character 'c' as a delimiter. The array must end with a NULL pointer.
 * @param s the string to be split
 * @param c the delimiter character
 * @return if the allocation fails return NULL, otherwise, return the array of
 * new strings resulting from the split
 */
char		**ft_split( const char *s, char c );

/**
 * Searches for the first occurrence of the character passed in the second
 * parameter in the string specified by the first parameter.
 * @param s the string in which to search
 * @param c the desired character
 * @return if the searched character is present in the string, a pointer to the
 * first occurrence of the character will be returned, otherwise, the NULL
 * pointer will be returned
 */
char		*ft_strchr( const char *s, uint8_t c );

/**
 * Searches for the last occurrence of the character passed in the second
 * parameter in the string specified by the first parameter.
 * @param s the string in which to search
 * @param c the desired character
 * @return if the searched character is present in the string, a pointer to the
 * last occurrence of the character will be returned, otherwise, a NULL pointer
 * will be returned
 */
char		*ft_strrchr( const char *s, uint8_t c );

/**
 * Duplicate the string passed as parameter.
 * @param s the address of the string to duplicate
 * @return if there is enough memory space to produce the new string, returns
 * the address of the duplicated string, otherwise, a NULL pointer will be
 * returned
 */
char		*ft_strdup( const char *s );

/**
 * Duplicates n characters of the string s passed in parameter.
 * @param s the address of the string to duplicate
 * @param n the number of character to duplicate
 * @return if there is enough memory space to produce the new string, returns
 * the address of the duplicated string, otherwise, a NULL pointer will be
 * returned
 */
char		*ft_strndup( const char *s, uint32_t n );

/**
 * Applies the function 'f' on each character of the string passed as argument,
 * passing its index as first argument. Each character is passed by address to
 * 'f' to be modified is necessary.
 * @param s the string on which to iterate
 * @param f the function to apply to each character
 */
void		ft_striteri( char *s, void (*f)(uint32_t, char *) );

/**
 * Allocates and returns a new string, which is the result of the concatenation
 * of 's1' and 's2'.
 * @param s1 the prefix string
 * @param s2 the suffix string
 * @return if the allocations fails return NULL, otherwise, return the new
 * string
 */
char		*ft_strjoin( const char *s1, const char *s2 );

/**
 * Copy and concatenate strings, take the full size of the destination buffer
 * and guarantee NUL-termination if there is room.
 * @param dst the address of the string to which the content of the other string
 * should be concatenate
 * @param src the address of the string to concatenate
 * @param dstsize the maximal number of characters to concatenate
 * @return the address of the string resulting from the concatenation
 */
uint32_t	ft_strlcat( char *dst, const char *src, uint32_t dstsize );

/**
 * Copy and concatenate strings, take the full size of the destination buffer
 * and guarantee NUL-termination if there is room, copies up to dstsize - 1
 * characters from the string src to dst, NUL-terminating the result if dstsize
 * is not zero.
 * @param dst the address of the string to which the content of the other string
 * should be concatenate
 * @param src the address of the string to concatenate
 * @param dstsize the maximal number of characters to concatenate
 * @return the address of the string resulting from the concatenation
 */
uint32_t	ft_strlcpy( char *dst, const char *src, uint32_t dstsize );

/**
 * Computes the length of the string passed in parameter.
 * @param s the string to computes this length
 * @return return the number of character(s) contains in string passed in
 * parameter
 */
uint32_t	ft_strlen( const char *s );

/**
 * Computes the length of the string passed in parameter as long its does not
 * find the delimiter c or is not the end of the string.
 * @param s the string to computes this length
 * @param c the delimiter character
 * @return return the number of character(s) contains in string passed in
 * parameter
 */
uint32_t	ft_strlen_charset( const char *s, uint8_t c );

/**
 * Applies the function 'f' to each character of the string 's', and passing its
 * index as first argument to create a new string resulting from successive
 * applications of 'f'.
 * @param s the string on which to iterate
 * @param f the function to apply to each character
 * @return if the allocation fails return NULL, otherwise, return the string
 * created the successive applications of 'f'
 */
char		*ft_strmapi( const char *s, char (*f)(uint32_t, char) );

/**
 * Compare two strings and know if the first one is inferior, equals or superior
 * to the second one.
 * @param s1 the first string to compare
 * @param s2 the second string to compare
 * @param n the maximal number of characters to compare
 * @return if the two strings are equals, a NULL value will be returned, if the
 * first strings is smaller than the second, a negative value will be returned,
 * if the first string is bigger than the second one, a positive value will be
 * returned
 */
int32_t		ft_strncmp( const char *s1, const char *s2, uint32_t n );

/**
 * Locates the first occurrence of the NUL-terminated string needle in the
 * string haystack, where not more than len characters are searched.
 * @param haystack the string in which to search
 * @param needle the substring to search in the haystack string
 * @param len the size of the string to be analyzed
 * @return if needle is an empty string haystack is returned; if needle occurs
 * nowhere in haystack NULL is returned; otherwise, a pointer to the first
 * character of the first occurrence of needle is returned
 */
char		*ft_strnstr(const char *haystack, const char *needle, uint32_t len);

/**
 * Allocates and returns a copy of 's1' with the characters specified in 'set'
 * removed from the beginning and the end of the string.
 * @param s1 the string to be trimmed
 * @param set the reference set of characters to trim
 * @return if the allocation fails return NULL, otherwise, return the trimmed
 * string
 */
char		*ft_strtrim( const char *s1, const char *set );

/**
 * Allocates and returns a substring from the string 's'. The substring begins
 * at index 'start' and is of maximum size 'len'.
 * @param s the string from which to create the substring.
 * @param start the start index of the substring in the string 's'
 * @param len the maximum length of the substring
 * @return if the allocations fails return NULL, otherwise, return the substring
 */
char		*ft_substr( const char *s, uint32_t start, uint32_t len );

#endif
