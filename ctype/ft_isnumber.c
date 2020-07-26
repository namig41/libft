#include "libft.h"

int ft_isnumber(const char *str, size_t len)
{
    size_t i;

    i = 0;
    while (i < len && ft_isescape(str[i]))
        i++;
    while (i < len && !ft_isescape(str[i]))
    {
        if (!ft_isdigit(str[i]))
            return (0);
        i++;
    }
    while (i < len && ft_isescape(str[i]))
        i++;
    return ((i - len) == 0);
}
