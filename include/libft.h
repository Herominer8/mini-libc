#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>

/* ========== STRING FUNCTIONS ========== */
size_t	ft_strlen(const char *s);
char	*ft_strcpy(char *dest, const char *src);
int		ft_strcmp(const char *s1, const char *s2);
char	*ft_strdup(const char *s1);

/* ========== MEMORY FUNCTIONS ========== */
void	*ft_memset(void *s, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);

/* ========== SYSTEM FUNCTIONS ========== */
ssize_t	ft_write(int fd, const void *buf, size_t count);
ssize_t	ft_read(int fd, void *buf, size_t count);

#endif
