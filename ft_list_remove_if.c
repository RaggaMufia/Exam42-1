
#include <stdlib.h>
#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *list;
	t_list *parent;
	t_list *tmp;

	list = *begin_list;
	parent = 0;
	tmp = 0;
	while (list)
	{
		tmp = list;
		if ((*cmp)(data_ref, list->data) == 0)
		{
			if (parent)
				parent->next = list->next;
			else
				*begin_list = list->next;
			free(list);	
		}
		else
		{
			parent = list;
		}
		list = tmp->next;
	}
}
