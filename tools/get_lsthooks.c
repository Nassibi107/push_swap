/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_lsthooks.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 14:44:36 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/19 15:26:39 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	*get_arr_hook(t_stack *sa, t_stack *sb, int *len)
{
	int	*arr;
	int	l;

	l = 0;
	while (sa)
	{
		if (sa->value > sb->value)
			l++;
		sa = sa->next;
	}
	*len = l;
	if (*len == 0)
	{
		*len = -1;
		return (0x0);
	}
	else
		arr = ft_calloc(*len, sizeof(int));
	return (arr);
}

static t_stack	*get_addlst_min(t_stack *sa)
{
	t_stack	*p;
	int		pos;

	p = NULL;
	pos = get_lstmin(sa);
	while (sa)
	{
		if (sa->pos == pos)
			p = sa;
		sa = sa->next;
	}
	return (p);
}

t_stack	*get_address_ofhook(t_stack *sa, int min)
{
	t_stack	*add;

	add = NULL;
	while (sa)
	{
		if (sa->value == min)
		{
			add = sa;
			break ;
		}
		sa = sa->next;
	}
	return (add);
}

t_stack	*get_lsthook(t_stack *sa, t_stack *sb)
{
	t_stack	*tmp;
	int		i;
	int		len;
	int		*arr;
	int		min;

	tmp = sa;
	i = 0;
	arr = get_arr_hook(sa, sb, &len);
	if (!arr)
		return (get_addlst_min(sa));
	while (tmp)
	{
		if (tmp->value > sb->value)
			arr[i++] = tmp->value;
		tmp = tmp->next;
	}
	min = arr[0];
	i = -1;
	while (++i < len)
	{
		if (arr[i] < min)
			min = arr[i];
	}
	return (get_address_ofhook(sa, min));
}

void	get_lsthooks(t_stack *sa, t_stack *sb)
{
	if (!sb)
		return ;
	sb->hook = get_lsthook(sa, sb);
	get_lsthooks(sa, sb->next);
}
