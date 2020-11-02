#include "libft.h"

t_list		*ft_lstswap(t_list *lst1, t_list *lst2)
{
	lst1->next = lst2->next;
	lst2->next = lst1;
	return (lst2);
}
