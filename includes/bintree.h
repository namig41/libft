#ifndef BINTREE_H
# define BINTREE_H
# include "libft.h"

typedef struct 			s_bintree {
	void 				*data;
	int 				key;
	struct s_bintree 	*l;
	struct s_bintree 	*r;
} 						t_bintree;

int 					tree_init(t_bintree *root);
int 					tree_destroy(t_bintree *root);

int 					insert_node(t_bintree *root, void *data, int key);
t_bintree  				*create_node(void *data, int key);

void 					preorder(t_bintree *root);
void 					inorder(t_bintree *root);
void 					postorder(t_bintree *root);


#endif 
