/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_build_sa.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 16:32:40 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/08 09:32:46 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

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

static t_stack	*ft_lstnew_sa(int content,int pos)
{
	t_stack	*new;

	new = malloc(sizeof(t_stack));
	if (!new)
		return (NULL);
	new->value = content;
	new->pos = pos;
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
		ft_lstnew_sa(val, i); 
		val = (int) ft_atoi(str[i++]);
	}
	else
	{
		val = (int) ft_atoi(str[i]);

			ft_lstadd_back_sa(sa,ft_lstnew_sa(val, i));
			i++;
		}
	}
}

