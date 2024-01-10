/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 17:17:38 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/10 12:15:24 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fun.h"
#include <stdio.h>


int *ft_tsub(t_stack *head)
{
	t_stack *tmp = head;
	t_stack *j = head;
	t_stack *i  = head->next;
   int id = 0;
	int size = get_lstsize(head);
	int *arr = calloc(size ,4);
	int *trk = calloc(size ,4);
	int max = 0;

	while (id < size)
			arr[id++] = 1;
		id = 0;
		while (i)
		{
			id = 0;
			while (id  < size -1)
				{
					trk[id++] = 0;
				}
			id = 0;
			j  = tmp;
			while (i->pos > j->pos )
			{
				if (i->value > j->value)
				{
					trk[id] =  arr[i->pos] + arr[j->pos];
					id++;
				}
				else
					id++;
				j = j->next;
			}

			id = 0;
			max = 0;
			while (id  < size -1)
				{
					if (trk[id] > max)
						max = trk[id];
					id++;
				}
				id = 0;
			if (max == 0)
				max = 1;
			arr[i->pos] = max;

			i = i->next;
		}
		return (arr);
}

int main ()
{
	t_stack *head;
	t_stack *sb = NULL;

	head = malloc(sizeof(t_stack));
	head->next = malloc(sizeof(t_stack));
	head->next->next = malloc(sizeof(t_stack));
	head->next->next->next = malloc(sizeof(t_stack));
	head->next->next->next->next = malloc(sizeof(t_stack));
	head->next->next->next->next->next = NULL;

	head->value = 0;
	head->next->value = -4;
	head->next->next->value = 12;
	head->next->next->next->value = 2;
	head->next->next->next->next->value = 10;

	head->pos = 0;
	head->next->pos = 1;
	head->next->next->pos = 2;
	head->next->next->next->pos = 3;
	head->next->next->next->next->pos = 4;

    ft_tsub(head);
   int i = 0;
   while(i < 5)
   {
      printf("%d\t",ft_tsub(head)[i++]);
   }

}

