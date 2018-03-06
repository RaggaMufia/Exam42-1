
#include "list.h"
#include <stddef.h>

static void		list_swap(t_list *l1, t_list *l2)
{
	int				tmp;

	tmp = l1->data;
	l1->data = l2->data;
	l2->data = tmp;
}

t_list			*sort_list(t_list *lst, int (*cmp)(int, int))
{
	t_list			*tmp;

	tmp = lst;
	while (lst != NULL && lst->next != NULL)
	{
		if (cmp(lst->data, lst->next->data) == 0)
		{
			list_swap(lst, lst->next);
			lst = tmp;
		}
		else
			lst = lst->next;
	}
	return (tmp);
}
