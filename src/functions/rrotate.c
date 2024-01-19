/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrotate.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 21:01:43 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/19 17:53:52 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fun.h"

static void	rrotate_a(t_stack **head)
{
	t_stack	*tmp;

	tmp = lststack(*head);
	ft_befor_lst(*head)->next = NULL;
	tmp->next = (*head);
	*head = tmp;
	ft_putendl_fd("rra", 1);
	set_pos_lstx(*head);
}

static void	rrotate_b(t_stack **head)
{
	t_stack	*tmp;

	tmp = lststack(*head);
	ft_befor_lst(*head)->next = NULL;
	tmp->next = (*head);
	tmp = *head;
	set_pos_lstx(*head);
}

void	rrotate(t_stack **head, t_stack **sb, char flag)
{
	if (flag == 'a')
		rrotate_a(head);
	else if (flag == 'b')
	{
		rrotate_b(head);
		ft_putendl_fd("rrb", 1);
	}
	else if (flag == 'r')
	{
		rrotate_b(head);
		rrotate_b(sb);
		ft_putendl_fd("rrr", 1);
	}
}
