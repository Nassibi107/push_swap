/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lststack.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 20:51:46 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/05 20:53:36 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack	*lststack(t_stack *lst)
{
	t_stack	*temp;

	temp = lst;
	if (!temp)
		return (0);
	while (temp->next)
		temp = temp->next;
	return (temp);
}
