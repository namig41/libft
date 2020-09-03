#include "libft.h"

void 	ft_strsplit_clear(char **s)
{
	size_t i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
		ft_memdel((void **)&s[i]);
	ft_memdel((void **)&s);
}
