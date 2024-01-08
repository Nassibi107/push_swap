/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 15:57:40 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/08 16:06:24 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fun.h"

void pushing(t_stack **sa,t_stack **sb)
{
	push_b(sa, sb);
	push_b(sa, sb);
	push_a(sa, sb);
	push_a(sa, sb);
}

// int main ()
// {
// 	t_stack *head;
// 	t_stack *sb = NULL;

// 	head = malloc(sizeof(t_stack));
// 	head->next = malloc(sizeof(t_stack));
// 	head->next->next = malloc(sizeof(t_stack));
// 	head->next->next->next = malloc(sizeof(t_stack));
// 	head->next->next->next->next = malloc(sizeof(t_stack));
// 	head->next->next->next->next->next = NULL;

// 	head->value = 1000;
// 	head->next->value = -2;
// 	head->next->next->value = -3000;
// 	head->next->next->next->value = -100;
// 	head->next->next->next->next->value =4;

// 	head->pos = 0;
// 	head->next->pos = 1;
// 	head->next->next->pos = 2;
// 	head->next->next->next->pos = 3;
// 	head->next->next->next->next->pos = 4;

// 	pushing(&head,&sb);
// 	showlst(head);
// 	printf("\n----------sb--------\n");
// 	while (sb)
// 	{
// 		printf("{v:[%d] p:[%d]}-->",sb->value,sb->pos);
// 		sb = sb->next;
// 	}
// 	printf(" NULL");
// 	printf("\n----------head--------\n");
// 	while (head)
// 	{
// 		printf("{v:[%d] p:[%d]}-->",head->value,head->pos);
// 		head = head->next;
// 	}
// 	printf(" NULL");
// }
