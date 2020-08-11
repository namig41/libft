#ifndef GC_H
# define GC_H
# include "libft.h"

void 				*gc_get_ptr_list(void);

void				*gc_alloc(size_t size);
void				*gc_calloc(size_t size);
void				gc_free() __attribute__ ((destructor));

#endif