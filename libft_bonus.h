/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_bonus.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcongolo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 16:50:26 by jcongolo          #+#    #+#             */
/*   Updated: 2024/12/10 16:50:56 by jcongolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BONUS_LIBFT_H
# define BONUS_LIBFT_H

#include <stdio.h>
#include <stdlib.h>


typedef struct	s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

t_list	*ft_lstnew(void *content);
void ft_lstadd_front(t_list **lst, t_list *new);

#endif
