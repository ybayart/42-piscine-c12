#include <stdio.h>
#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list);

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

	printf("%s\n", ft_list_last(begin)->data);
}
