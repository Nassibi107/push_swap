/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_pos_lstx.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 14:36:34 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/08 14:59:45 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "tools.h"



void set_pos_lstx(t_stack *head)
{
	t_stack	*tmp ;
	int	i;

	i = 0;
	tmp = head;
	while (tmp)
	{
		tmp->pos = i++;
		tmp = tmp->next;
	}

}
