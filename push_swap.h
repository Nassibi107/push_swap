/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 14:29:44 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/21 14:00:19 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "src/libft/libft.h"
# include <limits.h>
# include <stdio.h>
# include <stdlib.h>

typedef struct stack
{
	int				value;
	int				pos;
	int				sub;

	struct stack	*hook;
	int				mv;
	struct stack	*next;
}					t_stack;

void				nsub_to_sb(t_stack **head, t_stack **sb);
int					is_double(char **rst);
int					ft_lenjoin(char **av, int ac);
int					is_valid(char **rst);
char				*ft_join(char **av, int len, int ac);
void				ft_build_sa(char **str, t_stack **sa);
t_stack				*lststack(t_stack *lst);
t_stack				*ft_befor_lst(t_stack *lst);
int					get_lstmin(t_stack *sa);
int					get_lstmax(t_stack *sa);
int					get_lstsize(t_stack *sa);
void				showlst(t_stack *sa);
void				set_pos_lstx(t_stack *head);

void				swap(t_stack **head, t_stack **sb, char flag);
void				rotate(t_stack **head, t_stack **sb, char flag);
void				rrotate(t_stack **head, t_stack **sb, char flag);
void				ft_switch(t_stack *sa, t_stack *sb);
void				sort_t(t_stack **head, char flag);
void				sort_th(t_stack **head, char flag);
void				push_b(t_stack **head, t_stack **sb);
void				push_a(t_stack **sa, t_stack **sb);
void				pushing(t_stack **sa, t_stack **sb);
int					*ft_tsub(t_stack *head, int size);
void				ft_subnode(t_stack **head);
void				shefting(t_stack **head);
void				move_a(t_stack **sa, t_stack **sb);
void				move_b(t_stack **sa, t_stack **sb);
void				get_lsthooks(t_stack *sa, t_stack *sb);
char				**input_checker(int ac, char **av);
void				get_bsmove_lst(t_stack **sa, t_stack **sb);
void				bolt(t_stack *sb, t_stack *sa);
void				ft_sorting(t_stack **sa);
void	pu_sh(t_stack **src, t_stack **dest, int flag);

void	loop(t_stack **stack_a, t_stack **stack_b);
void	getmin_move(t_stack **stack_b, t_stack **stack_a);
void	ft_push_bm(t_stack **sb, t_stack **sa,t_stack *best);
int	ft_index(t_stack **stack, int a);
#endif
