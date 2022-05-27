/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lists.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 20:46:49 by mmosca            #+#    #+#             */
/*   Updated: 2022/05/26 19:10:55 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LISTS_H
# define LISTS_H

/**
 * Adds the node 'new' at the end of the list.
 * @param alst the address of a pointer to the first link of a list
 * @param new the address of a pointer to the node to be added to the list
 */
void	ft_lstadd_back( t_list **alst, t_list *new );

/**
 * Adds the node 'new' at the beginning of the list
 * @param alst the address of a pointer to the first link of a list
 * @param new the address of a pointer to the node to be added to the list
 */
void	ft_lstadd_front( t_list **alst, t_list *new );

/**
 * Deletes and frees the given node and every successor of that node, using the
 * function 'del' and free. Finally, the pointer to the list must be set to
 * NULL.
 * @param lst the address of a pointer to a node
 * @param del the addres of the function used to delete the content of the node
 */
void	ft_lstclear( t_list **lst, void (*del)(void *) );

/**
 * Takes as a parameter a node and frees the memory of the node's content using
 * the function 'del' given as a parameter and free the node. The memory of
 * 'next' must not be freed.
 * @param lst the node to free
 * @param del the address of the function used to delete the content
 */
void	ft_lstdelone( t_list *lst, void (*del)(void *) );

/**
 * Iterates the list 'lst' and applies the function 'f' on the content of each
 * node.
 * @param lst the addres of a pointer to a node
 * @param f the address of the function used to iterate on the list
 */
void	ft_lisiter( t_list *lst, void (*f)(void *) );

/**
 * Returns the last node of the list.
 * @param lst the beginning of the list
 * @return last node of the list
 */
t_list	*ft_lstlast( t_list *lst );

/**
 * Iterates the list 'lst' and applies the function 'f' on the content of each
 * node. Creates a new list resulting of the successive applications of the
 * function 'f'. The 'del' function is used to delete the content of a node if
 * needed.
 * @param lst the address of a pointer to a node
 * @param f the address of the function used to iterate on the list
 * @param del the address of the function used to delete the content of a node
 * if needed
 * @return if the allocation fails return NULL, otherwise, return the new list
 */
t_list	*ft_lstmap( t_list *lst, void *(*f)(void *), void (*del)(void *) );

/**
 * Allocates and returns a new node. The member variable 'content' is
 * initialized with the value of the parameter 'content'. The variable 'next' is
 * initialized to NULL.
 * @param content the content to create the node with
 * @return the new node
 */
t_list	*ft_lstnew( void *content );

/**
 * Counts the number of nodes in a list.
 * @param lst the beginning of the list
 * @return the length of the list
 */
int32_t	ft_lstsize( t_list *lst );

#endif
