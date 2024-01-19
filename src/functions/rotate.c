/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 20:27:31 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/19 12:13:15 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fun.h"

static void rotate_a(t_stack **head)
{
	t_stack	*tmp;
	t_stack	*rot;

	tmp = *head;
	rot = tmp->next;
	lststack(*head)->next = *head;
	(*head)->next = 0x0;
	*head = rot;
	ft_putendl_fd("ra", 1);
	set_pos_lstx(*head);
}
static void rotate_b(t_stack **head)
{
	t_stack	*tmp;
	t_stack	*rot;

	tmp = *head;
	rot = tmp->next;
	lststack(*head)->next = *head;
	(*head)->next = 0x0;
	*head = rot;
	set_pos_lstx(*head);
}


void rotate(t_stack **head,t_stack **sb,char flag)
{
	if (flag == 'a')
		rotate_a(head);
	else if (flag == 'b')
		rotate_b(head);
	else if (flag == 'r')
		{
			rotate_b(head);
			rotate_b(sb);
			ft_putendl_fd("rr", 1);
		}

}
