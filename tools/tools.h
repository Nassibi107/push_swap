/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 15:22:57 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/07 13:15:39 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_TOOLS_H
# define FT_TOOLS_H

# include <unistd.h>

typedef struct stack
{
	int	value;
	int	pos;
	struct stack	*next;
} t_stack;


int	is_double(char **rst);
int	ft_lenjoin(char **av,int ac);
int	is_valid(char **rst);
char	*ft_join(char **av,int len,int ac);
void	ft_build_sa(char **str, t_stack **sa);
t_stack	*lststack(t_stack *lst);
t_stack	*ft_befor_lst(t_stack *lst);
int	get_lstmin(t_stack *sa);
int	get_lstmax(t_stack *sa);
int	get_lstsize(t_stack *sa);
void	showlst(t_stack *sa);

#endif
