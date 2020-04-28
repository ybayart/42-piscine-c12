#include "ft_list.h"
#include <stdio.h>

void	ft_list_reverse(t_list **begin_with);
void    ft_list_push_front(t_list **begin_list, void *data);

int		main(void)
{
	t_list *liste;

	liste = 0;
	ft_list_push_front(&liste, "toto");
	ft_list_push_front(&liste, "tutu");
	ft_list_push_front(&liste, "tata");
	ft_list_push_front(&liste, "titi");
	ft_list_reverse(&liste);
	while (liste)
	{
		printf("%s\n", liste->data);
		liste = liste->next;
	}
}
