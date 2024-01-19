/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_t.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 11:23:27 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/19 13:13:15 by abechcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fun.h"

void	sort_t(t_stack **head, char flag)
{
	if ((*head)->value > (*head)->next->value)
		swap(head, NULL, flag);
	set_pos_lstx(*head);
}
