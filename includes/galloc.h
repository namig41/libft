
#ifndef GALLOC_H
# define GALLOC_H
# include "libft.h"

typedef struct		s_galloc
{
	void			*data;
	struct s_galloc *next;

}					t_galloc;

void				*ft_galloc(size_t size);
void				*ft_gmemalloc(size_t size);
void 				clear_memory(void);	

#endif