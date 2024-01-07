/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_t.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 11:23:27 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/07 13:07:54 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "fun.h"

void sort_t (t_stack **head ,char flag)
{
	if ((*head)->value > (*head)->next->value)
		swap(head, flag);
	else
		showlst(*head);

}

// int main ()
// {
// 	t_stack *head;
// 	t_stack *cur;

// 	head = malloc(sizeof(t_stack));
// 	head->next = malloc(sizeof(t_stack));
// 	head->next->next = NULL;
// 	head->value = -1;
// 	head->next->value = -2;

// 	cur =head;
// 	while(head)
// 	{
// 		printf(">> [%d]\t",head->value);
// 		head = head->next;
// 	}
// 	printf("\n------\n");
// 	head = cur;
// 	sort_t(&head, 'a');
// 	while(head)
// 	{
// 		printf(">> [%d]\t",head->value);
// 		head = head->next;
// 	}
// }
