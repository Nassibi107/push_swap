/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pu_s.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 21:13:48 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/21 13:45:12 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fun.h"
void	ft_lstadd_fronts(t_stack  **head, t_stack  *new)
{
	if (*head == NULL)
	{
		*head = new;
		(*head)->next = NULL;
	}
	else
	{
		new->next = *head;
		*head = new;
	}
}

void	pu_sh(t_stack **src, t_stack **dest, int flag)
{
	t_stack	*new;
 	if (!(*src))
		return;
	new = (*src);
	(*src) = (*src)->next;
	ft_lstadd_fronts(dest, new);
	if (flag == 1)
		write(1, "pa\n", 3);
	else if (flag == 0)
	{
		write(1, "pb\n", 3);
	}
}
