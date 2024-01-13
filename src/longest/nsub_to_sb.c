/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nsub_to_sb.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 14:42:13 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/13 14:51:04 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "logest.h"
#include <stdio.h>


static void get_flag(t_stack **head)
{
	int size = get_lstsize(*head);
	t_stack *tmp;

	tmp = *head;
   while (tmp)
	{
		while (tmp->pos < (size / 2)
			&& (tmp->sub == 0))
		{
			if (tmp->pos == 0 && tmp->sub == 0)
				return ;
			rotate(head, 'a');
			set_pos_lstx(tmp);
		}
		while (tmp->pos > (size / 2)
			&& (tmp->sub == 0) )
		{
			if (tmp->pos == 0 && tmp->sub == 0)
				return  ;
			rrotate(head, 'a');
			set_pos_lstx(tmp);
		}
		size = get_lstsize(*head);
		tmp =  tmp->next;
	}
}

void  nsub_to_sb(t_stack **head,t_stack **sb)
{

	ft_subnode(head);
	int i = 0;
	while (i++ < get_lstsize(*head))
	{
		get_flag(head);

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

//    //nsub_to_sb(&head,&sb);


// 	msu(&head,&sb);
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
