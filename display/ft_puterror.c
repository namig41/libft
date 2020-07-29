#include "libft.h"

void 	ft_puterror(char const *s)
{
	write(2, s, ft_strlen(s));
}
