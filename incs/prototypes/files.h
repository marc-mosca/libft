/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   files.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 20:23:05 by mmosca            #+#    #+#             */
/*   Updated: 2022/05/23 12:18:44 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILES_H
# define FILES_H

/**
 * Open a file safety and print a error message if something has wrong.
 * @param file the path of file to open
 * @return if all is good, return the file descriptor corresponding to the file,
 * otherwise, returns -1
 */
int32_t	ft_open( const char *file );

/**
 * Close a file and if close() return a error, display a error message.
 * @param fd the file descriptor to close
 */
void	ft_close( int32_t fd );

#endif
