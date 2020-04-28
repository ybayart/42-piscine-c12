#include <stdio.h>
#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data);

int		main(void)
{
	t_list	elem1, elem2, elem3, *begin;

	begin = &elem1;
	elem1.next = &elem2;
	elem2.next = &elem3;
	elem3.next = 0;

	elem1.data = "toto";
	elem2.data = "tata";
	elem3.data = "tutu";

	ft_list_push_front(&begin, "tasoeur");
	while (begin)
	{
		printf("%s\n", begin->data);
		begin = begin->next;
	}
}
