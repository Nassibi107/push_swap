/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 17:34:01 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/12 15:01:33 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "fun.h"

void push_b (t_stack **head,t_stack **sb)
{
	t_stack *tmp;
	tmp = *head;
	(*head) = (*head)->next;
	if (!(*sb))
	{
		*sb = tmp;
		tmp->pos = 1;
		tmp->next = NULL;
	}
	else
	{
		tmp->pos = 0;
		tmp->next =  *sb;
		*sb = tmp;
	}
	set_pos_lstx(*head);
	ft_putendl_fd("pb", 1);
}

