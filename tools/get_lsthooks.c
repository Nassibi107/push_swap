
#include "../push_swap.h"


static int  *get_arr_hook(t_stack *sa , t_stack *sb,int *len)
{
   // t_stack *tmp = sb;
	int *arr;
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
	t_stack *add = NULL;
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
	// printf(">> %d",len);

	return (get_address_ofhook(sa, min));
}
void 	get_lsthooks (t_stack *sa , t_stack *sb)
{

	if  (!sb)
		{
			return;
		}
	sb->hook = get_lsthook(sa, sb);
	get_lsthooks(sa,sb->next);
}

