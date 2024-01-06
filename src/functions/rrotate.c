/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrotate.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 21:01:43 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/06 10:52:15 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fun.h"
#include <stdio.h>

static void rrotate_a(t_stack **head)
{
	t_stack	*tmp;

	tmp = lststack(*head);
   ft_befor_lst(*head)->next = NULL;
   tmp->next = (*head);
   *head = tmp;
	ft_putstr_fd("rra\n", 1);
}
static void rrotate_b(t_stack **head)
{
	t_stack	*tmp;

	tmp = lststack(*head);
   ft_befor_lst(*head)->next = NULL;
   tmp->next = (*head);
   tmp = *head;
	ft_putstr_fd("rrb\n", 1);
}


void ft_rrotate(t_stack **head,char flag)
{
	if (flag == 'a')
		rrotate_a(head);
	else if (flag == 'b')
		rrotate_b(head);
	else if (flag == 'r')
		{
			rrotate_a(head);
			rrotate_b(head);
		}
}