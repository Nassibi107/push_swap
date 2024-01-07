/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_switch.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 11:30:09 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/07 15:39:58 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "fun.h"
#include <stdio.h>


void ft_switch(t_stack *head,int (*show)(t_stack *))
{
	int len;

	len = get_lstsize(head);
	if (len == 2)
	{
		sort_t(&head, 'a');
		show(head);
	}
	else if (len == 3)
	{
		sort_th(&head, 'a');
	}
}
