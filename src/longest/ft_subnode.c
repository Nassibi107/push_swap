/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_subnode.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 15:58:21 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/13 10:28:40 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "logest.h"

static int getmax_pos(int *tab,int size,int *max)
{
	int i = 0;
	int p = 0 ;


	while (i < size)
	{
		if (tab[i] >= *max)
		{	*max = tab[i];
			p = i;
		}
		i++;
	}
	return (p);
}
static int get_smax_pos(int *tab,int size,int *max)
{
	int i = 0;
	int p = 0 ;


	while (i < size)
	{
		if (tab[i] == *max)
		{	*max = tab[i];
			p = i;
		}
		i++;
	}
	return (p);
}

static void flaging(t_stack *head,int pos)
{
	while (head)
	{
		if (head->pos == pos)
			head->sub = 1;
		head = head->next;
	}
}

void ft_subnode(t_stack **head)
{
	int max = 0;
	int size = get_lstsize(*head);
	int *arr = ft_tsub(*head,size);
	int	p = 0;
	p = getmax_pos(arr,size, &max);
	while (1)
	{
		flaging(*head, p);
		if (max == 1)
			break;
		else
			max--;
		p =  get_smax_pos(arr,size,&max);
	}
}
