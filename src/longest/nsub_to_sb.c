/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nsub_to_sb.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 14:42:13 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/19 14:56:22 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "logest.h"
#include <stdio.h>

int	get_pos(t_stack *h)
{
	while (h)
	{
		if (h->sub == 0)
			return (h->pos);
		h = h->next;
	}
	return (-1);
}

static void	get_flag(t_stack **head, int (*f)(t_stack *))
{
	int	pos;

	pos = get_pos(*head);
	if (pos == -1)
		return ;
	if (pos > f(*head) / 2)
	{
		while ((*head)->sub != 0)
			rrotate(head, NULL, 'a');
	}
	else
	{
		while ((*head)->sub != 0)
			rotate(head, NULL, 'a');
	}
}

void	nsub_to_sb(t_stack **head, t_stack **sb)
{
	ft_subnode(head);
	while (get_pos(*head) >= 0)
	{
		get_flag(head, get_lstsize);
		push_b(head, sb);
	}
}
