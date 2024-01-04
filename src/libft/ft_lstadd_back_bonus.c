/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:19:12 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/03 10:09:36 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *jd)
{
	t_list	*temp;

	if (!*lst)
	{
		if (!jd)
			return ;
		*lst = jd;
		return ;
	}
	temp = ft_lstlast(*lst);
	temp->next = jd;
}
