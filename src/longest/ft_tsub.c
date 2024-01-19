/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tsub.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 11:40:35 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/18 12:41:39 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "logest.h"
#include "../../push_swap.h"
#include <stdlib.h>


static int get_tabmax(int *tab, int len)
{
	int id = 0;
	int max = 0;
	while (id  < (len - 1))
		{
			if (tab[id] >= max)
				max = tab[id];
			id++;
		}
				id = 0;
	if (max == 0)
		max = 1;
	return (max);
}
static void ft_setnum(int *tab,int len,int val)
{
	int i = 0;
	if (!val)
		len--;
	while (i  < len)
		tab[i++] = val;
}
static int *get_sublst(t_stack *head,int *arr, int *trk,int size)
{
		t_stack	*i = NULL;
		t_stack	*j = NULL;
		t_stack	*tmp = NULL;
		int		id;

		i = head->next;
		tmp = head;
		ft_setnum(arr,size,1);
		while (i)
		{
			ft_setnum(trk,size, 0);
			id = 0;
			j  = tmp;
			while (i->pos > j->pos )
			{
				if (i->value > j->value)
					trk[id++] =  arr[i->pos] + arr[j->pos];
				else
					id++;
				j = j->next;
			}
			arr[i->pos] = get_tabmax(trk,size) ;
			i= i->next;
		}
	return (arr);
}
int *ft_tsub(t_stack *head,int size)
{

	int *arr = malloc(size * 4);
	int *trk = malloc((size - 1 ) * 4);
	return (get_sublst(head,arr,trk, size));
}



