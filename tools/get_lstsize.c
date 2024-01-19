/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_lstsize.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 11:50:23 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/19 13:29:10 by abechcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools.h"

int	get_lstsize(t_stack *lst)
{
	t_stack	*head;
	int		cl;

	if (!lst)
		return (0);
	head = lst;
	cl = 0;
	while (head)
	{
		cl++;
		head = head->next;
	}
	return (cl);
}
