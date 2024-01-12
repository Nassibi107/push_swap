/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_subnode.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 15:58:21 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/12 09:53:45 by ynassibi         ###   ########.fr       */
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

void ft_subnode(t_stack *head)
{
	int max = 0;
	int size = get_lstsize(head);
	int *arr = ft_tsub(head,size);
	int i = 0;
	while (i < size)
		printf("%d\t",arr[i++]);
	printf("\n");
	int	p = 0;
	p = getmax_pos(arr,size, &max);
	while (1)
	{
		flaging(head, p);
		if (max == 1)
			break;
		else
			max--;
		p =  get_smax_pos(arr,size,&max);
	}
}
// int main ()
// {
// 	int max = 0;
// 	int tab[5] = {1,1,2,3,3};
// 	printf("max_>> %d",getmax_pos(tab,5,&max));
// }

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

// 	head->value = 0;
// 	head->next->value = -4;
// 	head->next->next->value = 12;
// 	head->next->next->next->value = 2;
// 	head->next->next->next->next->value = 10;

// 	head->pos = 0;
// 	head->next->pos = 1;
// 	head->next->next->pos = 2;
// 	head->next->next->next->pos = 3;
// 	head->next->next->next->next->pos = 4;
// 	head->sub = 0;
// 	head->next->sub = 0;
// 	head->next->next->sub = 0;
// 	head->next->next->next->sub = 0;
// 	head->next->next->next->next->sub = 0;

// 	ft_subnode(head);


// }

