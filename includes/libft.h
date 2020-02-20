/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpythago <fpythago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 18:41:12 by fpythago          #+#    #+#             */
/*   Updated: 2020/02/19 13:44:32 by fpythago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>

typedef unsigned char		t_uc;
typedef long double			t_ld;
typedef const unsigned char	t_cuc;
typedef unsigned long long	t_ull;
typedef long long			t_ll;
typedef short int			t_si;
typedef unsigned long		t_ul;
typedef unsigned int		t_ui;
typedef unsigned short int	t_usi;
typedef long				t_l;

void						*ft_memset(void *b, int c, size_t len);
void						ft_bzero(void *s, size_t n);
void						*ft_memcpy(void *dst, const void *src, size_t n);
void						*ft_memccpy(void *dst, const void *src,
										int c, size_t n);
void						*ft_memmove(void *dst, const void *src, size_t len);
void						*ft_memchr(const void *s, int c, size_t n);
void						*ft_memalloc(size_t size);
void						ft_memdel(void **ap);
void						ft_memswap(void *a, void *b, size_t size);
void						ft_swap(void **a, void **b);

size_t						ft_strlen(const char *s);
char						*ft_strchr(const char *str, int ch);
int							ft_strchri(const char *str, int ch);
char						*ft_strcat(char *dest, const char *src);
char						*ft_strncat(char *dest, const char *src, size_t n);
char						*ft_strjoin(const char *str1, const char *str2);
char						*ft_strcpy(char *dst, const char *src);
char						*ft_strncpy(char *dst, const char *src, size_t len);
char						*ft_strdup(const char *str);
void						ft_strclr(char *str);
int							ft_strcmp(const char *s1, const char *s2);
int							ft_strncmp(const char *s1, const char *s2, size_t n);
void						ft_striter(char *s, void (*f)(char *));
void						ft_striteri(char *s, void (*f)(unsigned int, char *));
char						*ft_strsave(char *str1, char *str2);
char						*ft_strnew(size_t size);

int							ft_atoi(const char *str);
char						*ft_itoa(int n);
char						*ft_lltoa(t_ll n);
char						*ft_uitoa_base(t_ui value, int base, char reg);
char						*ft_ulltoa_base(t_ull value, int base, char reg);
int							ft_tolower(int c);
int							ft_toupper(int c);

int							ft_isdigit(int c);
int							ft_isprint(int c);
int							ft_isalnum(int c);
int							ft_isalpha(int c);
int 						ft_isascii(int c);

size_t						ft_max(size_t a, size_t b);
long						ft_max_l(long a, long b);
size_t						ft_min(size_t a, size_t b);
long						ft_min_l(long a, long b);
t_ui						ft_random(t_ui rand_max);

void						ft_putchar_fd(char c, int fd);
void						ft_putendl_fd(char const *s, int fd);
void						ft_putstr_fd(char const *s, int fd);
void 						ft_putnbr_fd(int n, int fd);
void						ft_putchar(char c);
void						ft_putendl(char const *s);
void						ft_putstr(char const *s);
void 						ft_putnbr(int n);


#endif
