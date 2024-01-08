/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 20:27:31 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/08 17:30:16 by ynassibi         ###   ########.fr       */
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
	ft_putendl_fd("ra", 1);
}


void rotate(t_stack **head,char flag)
{
	if (flag == 'a')
		rotate_a(head);
	else if (flag == 'b')
		rotate_b(head);
	else if (flag == 'r')
		{
			rotate_a(head);
			rotate_b(head);
		}
}
