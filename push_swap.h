/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 14:29:44 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/10 15:38:30 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP
#define PUSH_SWAP

#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

#include "src/libft/libft.h"
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
void	set_pos_lstx(t_stack *head);

void swap(t_stack **head,char flag);
void rotate(t_stack **head,char flag);
void rrotate(t_stack **head,char flag);
void ft_switch(t_stack *sa , t_stack *sb);
void sort_t (t_stack **head ,char flag);
void sort_th (t_stack **head ,char flag);
void push_b (t_stack **head,t_stack **sb);
void	push_a (t_stack **sa,t_stack **sb );
void	pushing (t_stack **sa,t_stack **sb );
int *ft_tsub(t_stack *head);
char	**input_checker(int ac, char **av);

#endif

