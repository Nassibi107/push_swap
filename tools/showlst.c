/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   showlst.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 11:37:05 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/07 11:51:44 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools.h"
#include "../push_swap.h"

void	showlst(t_stack *head)
{
	while (head)
	{
		ft_putnbr_fd(head->value, 1);
		ft_putchar_fd('\t', 1);
		head = head->next;
	}
}
