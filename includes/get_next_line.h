#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE	1
# if BUFF_SIZE < 0
#  error "BUFF_SIZE has wrong size"
# endif
# define SEPARATOR '\n'
# define MAX_FILES	100000
# define SUCCESS 1
# define END_FILE 0
# define MEM_ERR -1

# include "vector.h"

int			get_next_line(const int fd, char **line);

#endif
