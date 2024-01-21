#include "logest.h"
#include <stdio.h>



void	ft_forward_to_rrr(t_stack **sa, t_stack **sb, t_stack *best)
{
	while (best->mv != 0 || best->hook->mv != 0)
	{
		if (best->mv != 0 && best->hook->mv != 0)
		{
			rrotate(sb, sa,'r');
			best->mv = best->mv + 1;
			best->hook->mv = best->hook->mv + 1;
		}
		else if (best->mv != 0 && best->hook->mv == 0)
		{
			rrotate(sb, NULL,'b');
			best->mv = best->mv + 1;
		}
		else if (best->mv == 0 && best->hook->mv != 0)
		{
			rrotate(sa, NULL,'a');
			best->hook->mv = best->hook->mv + 1;
		}
	}
}

void	ft_forward_to_rr(t_stack **sa, t_stack **sb, t_stack *best)
{
	while (best->mv != 0 || best->hook->mv != 0)
	{
		if (best->mv != 0 && best->hook->mv != 0)
		{
			rotate(sb, sa,'r');
			best->mv = best->mv - 1;
			best->hook->mv = best->hook->mv - 1;
		}
		else if (best->mv != 0 && best->hook->mv == 0)
		{
			rotate(sb, NULL,'b');
			best->mv = best->mv - 1;
		}
		else if (best->mv == 0 && best->hook->mv != 0)
		{
		rotate(sa, NULL,'a');
			best->hook->mv = best->hook->mv - 1;
		}
	}
}

void	ft_forward_to_r_rr(t_stack **sa, t_stack **sb, t_stack *best)
{
	while (best->mv != 0 || best->hook->mv != 0)
	{
		if (best->mv > 0)
		{
			rotate(sb, NULL,'b');
			best->mv = best->mv - 1;
		}
		else if (best->mv < 0)
		{
			rrotate(sb, NULL,'b');
			best->mv = best->mv + 1;
		}
		if (best->hook->mv > 0)
		{
			rotate(sb, NULL,'b');
			best->hook->mv = best->hook->mv - 1;
		}
		else if (best->hook->mv < 0)
		{
			rrotate(sa, NULL,'a');
			best->hook->mv = best->hook->mv + 1;
		}
	}
}


void	ft_push_bm(t_stack **sb, t_stack **sa,t_stack *best)
{

	while (*sb != best || *sa != best->hook)
	{
		if (best->mv == 0 && best->hook->mv == 0)
			break ;
		if (best->mv < 1 && best->hook->mv < 1)
			ft_forward_to_rrr(sa, sb, best);
		else if (best->mv >= 1 && best->hook->mv >= 1)
			ft_forward_to_rr(sa, sb, best);
		else
			ft_forward_to_r_rr(sa, sb, best);
	}
}
