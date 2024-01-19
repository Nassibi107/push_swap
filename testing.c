/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 17:17:38 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/11 17:34:55 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fun.h"
#include <stdio.h>


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

