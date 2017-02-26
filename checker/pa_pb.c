#include "checker.h"

void	pa(t_d_linklst *list_a, t_d_linklst *list_b)
{
	if (list_b->size == 0)
		return ;
	push_head(list_a, list_b);
}

void	pb(t_d_linklst *list_a, t_d_linklst *list_b)
{
	if (list_a->size == 0)
		return ;
	push_head(list_b, list_a);
}

