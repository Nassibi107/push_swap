/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_t.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 11:23:27 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/19 11:07:03 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "fun.h"

void sort_t (t_stack **head ,char flag)
{
	if ((*head)->value > (*head)->next->value)
		swap(head,NULL ,flag);
	set_pos_lstx(*head);
}
