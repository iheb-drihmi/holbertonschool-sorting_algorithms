#include "sort.h"
/**
* insertion_sort_list - a function that sorts a doubly linked list of integers 
* @list: linked list
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *tmp;
	int num;

	if (!list)
		return;
	tmp = *list;
	while (tmp)
	{
		while (tmp)
		{
			if (tmp->next)
			{
				if (tmp->num > tmp->next->num)
				{
					num = tmp->num;
					*(int *)&tmp->num = tmp->next->num;
					*(int *)&tmp->next->num = num;
					tmp = *list;
					print_list(*list);
					break;
				}
			}
			tmp = tmp->next;
		}
	}
}
