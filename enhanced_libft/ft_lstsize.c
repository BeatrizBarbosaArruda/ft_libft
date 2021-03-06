/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 15:29:43 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/02/08 00:34:50 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Counts how many nodes are in a list.
*/

int	ft_lstsize(t_list *lst)
{
	int list_size;

	if (lst == NULL)
		return (0);
	list_size = 1;
	while (lst->next != NULL)
	{
		list_size++;
		lst = lst->next;
	}
	return (list_size);
}
