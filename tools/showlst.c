/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   showlst.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 11:37:05 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/15 17:50:21 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include <stdio.h>

void	showlst(t_stack *head)
{
	while (head)
	{
		printf("%d",head->value);
		printf("  :[%p]\t",head);
		printf("   sub:[%d]\t",head->sub);
		printf("   hook:[%p]\n",head->hook);
		head = head->next;
	}
}
