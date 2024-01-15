/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nsub_to_sb.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 14:42:13 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/15 17:47:02 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "logest.h"
#include <stdio.h>

int get_pos(t_stack *h)
{

	while(h)
	{
		if (h->sub == 0)
			return (h->pos);
		h = h->next;
	}
	return -1;
}
static void get_flag(t_stack **head,int (*f)(t_stack *))
{

	int pos = get_pos(*head);
	if (pos == -1 )
		return ;
	if (pos >= f(*head) / 2)
	{
		while((*head)->sub != 0)
			rrotate(head, 'a');
	}
	else {
		while((*head)->sub != 0)
			rotate(head, 'a');
	}
}

void  nsub_to_sb(t_stack **head,t_stack **sb)
{

	ft_subnode(head);
	int i = 0;
	int len = get_lstsize(*head);
	while (i++ < len)
	{
		get_flag(head,get_lstsize);
		if ((*head)->sub == 0)
			push_b(head, sb);
	}
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
// 	head->next->next->next->next->next = malloc(sizeof(t_stack));
// 	head->next->next->next->next->next->next = NULL;

// 	head->value = 0;
// 	head->next->value = -4;
// 	head->next->next->value = 12;
// 	head->next->next->next->value = 2;
// 	head->next->next->next->next->value = 10;
// 	head->next->next->next->next->next->value = 8;

// 	head->pos = 0;
// 	head->next->pos = 1;
// 	head->next->next->pos = 2;
// 	head->next->next->next->pos = 3;
// 	head->next->next->next->next->pos = 4;
// 	head->next->next->next->next->next->pos = 5;

//    nsub_to_sb(&head,&sb);

// 	printf("\n");
//    while(head)

//    {
//       printf("a = [%d]\t",head->value);
// 		head = head->next;
//    }
// 	printf("\n");
//    while(sb)

//    {
//       printf("b = [%d]\t",sb->value);
// 		sb = sb->next;
//    }


// }
