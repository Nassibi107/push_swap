/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tsub.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 11:40:35 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/09 17:14:22 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "logest.h"
#include "../../push_swap.h"
#include <assert.h>
#include <stdlib.h>


void ft_tsub(t_stack *head)
{
	t_stack *tmp = head;
	t_stack *j = head;
	t_stack *i  = head->next;
	int size = get_lstsize(head);
	int *arr = calloc(size ,4);


		while (i)
		{
			j  = tmp;
			while (i > j)
			{
				arr[i->pos] +=1;
				j = j->next;
			}
			i = i->next;
		}
}
int main ()
{

}
