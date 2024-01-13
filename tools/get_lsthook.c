/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_lsthook.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 11:51:05 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/13 18:01:49 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"


static int  *get_arr_hook(t_stack *sa , t_stack *sb,int *len)
{
   int *arr ;
   t_stack *tmp = sb;

	int l =0 ;
   while (sa)
   {
      if (sa->value > sb->value )
         l++;
      sa =  sa->next;
   }
	*len = l;
   if (*len == 0)
      {
			*len = -1;
			return (0x0);
		}
   else
      arr =  calloc(*len , sizeof(int));
   return (arr);
}
static t_stack  *get_addlst_min(t_stack *sa)
{
   int *arr ;
   t_stack *p = NULL;
	int pos = get_lstmin(sa);
	while (sa)
	{
		if (sa->pos == pos)
			p = sa;
		sa = sa->next;
	}
	return (p);
}
t_stack  *get_address_ofhook(t_stack *sa,int min)
{
	t_stack *add;
	while(sa)
	{
		 if (sa->value == min )
		{
			add = sa;
			break;
		}
		sa =  sa->next;
	}
	return (add);
}
t_stack  *get_lsthook(t_stack *sa , t_stack *sb)
{

	 t_stack *tmp = sa;
	int i =0;
	int len = 0;
	int *arr = get_arr_hook(sa, sb , &len);
	if (len == -1)
		return (get_addlst_min(sa));
	while(tmp)
	{
		 if (tmp->value > sb->value )
			arr[i++] = tmp->value;
		tmp =  tmp->next;
	}
	int min = arr[0];
	i = 0;
	while (i < len)
	{
		if (arr[i] < min)
			min = arr[i];
		i++;
	}
	printf(">> %d",len);

	return (get_address_ofhook(sa, min));
}
int main ()
{
	t_stack *head;
	t_stack *sb = NULL;
	int a = 5;

	head = malloc(sizeof(t_stack));
	head->next = malloc(sizeof(t_stack));
	head->next->next = malloc(sizeof(t_stack));
	head->next->next->next = malloc(sizeof(t_stack));
	head->next->next->next->next = malloc(sizeof(t_stack));
	head->next->next->next->next->next = malloc(sizeof(t_stack));
	head->next->next->next->next->next->next = NULL;

	head->value = 0;
	head->next->value = 4;
	head->next->next->value = 12;
	head->next->next->next->value = 2;
	head->next->next->next->next->value = 10;
	head->next->next->next->next->next->value = 8;

	head->pos = 0;
	head->next->pos = 1;
	head->next->next->pos = 2;
	head->next->next->next->pos = 3;
	head->next->next->next->next->pos = 4;
	head->next->next->next->next->next->pos = 5;

   nsub_to_sb(&head,&sb);

	t_stack *tmp = head;
	t_stack *tmp_1 = sb;


	while(head)
	{
		printf("[%d]--[%p]\t",head->value,head);
		head = head->next;
	}
	printf("\n");
	while(sb)
	{
		printf("[%d]--[%p]\t",sb->value,sb);
		sb = sb->next;
	}
	printf("\n%d\t",	 get_lsthook(tmp,tmp_1)->value);


}
