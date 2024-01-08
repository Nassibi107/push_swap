/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 17:34:01 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/08 16:04:22 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "fun.h"


#include <stdio.h>
#include <stdlib.h>

static void  shefting(t_stack **head)
{
	int size = get_lstsize(*head);
	int min = get_lstmin(*head);

	while (min)
	{
		if (min <= (size / 2))
			rotate(head, 'a');
		else
			rrotate(head, 'a');
		min = get_lstmin(*head);
	}
}


void push_b (t_stack **head,t_stack **sb)
{
	t_stack *tmp;
	shefting(head);

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
}
