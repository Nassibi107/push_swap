/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_build_sa.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 16:32:40 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/05 17:47:35 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include "tools.h"

static void tst(t_stack **sa)
{
	t_stack *cur = *sa;
	while(cur)
	{
		printf(">>%d\n",cur->value);
		cur = cur->next;
	}
}

static t_stack	*lststack(t_stack *lst)
{
	t_stack	*temp;

	temp = lst;
	if (!temp)
		return (0);
	while (temp->next)
		temp = temp->next;
	return (temp);
}
static void	ft_lstadd_back_sa(t_stack **sa, t_stack *nsa)
{
	t_stack	*temp;

	if (!*sa)
	{
		if (!nsa)
			return ;
		*sa = nsa;
		return ;
	}
	temp = lststack(*sa);
	temp->next = nsa;
}

static t_stack	*ft_lstnew_sa(int content)
{
	t_stack	*new;

	new = malloc(sizeof(t_stack));
	if (!new)
		return (NULL);
	new->value = content;
	new->next = NULL;
	return (new);
}

void	ft_build_sa(char **str, t_stack **sa)
{

	int i;
	int val;
	i = 0;
	while (str[i])
	{
	if (!sa)
	{
		ft_lstnew_sa(val);
		val = (int) ft_atoi(str[i++]);
	}
	else
	{
		val = (int) ft_atoi(str[i]);

			ft_lstadd_back_sa(sa,ft_lstnew_sa(val));
			i++;
		}
	}
	tst(sa);
}

