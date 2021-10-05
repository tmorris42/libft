#include "libft.h"

char	*ft_strndup(const char *s1, size_t n)
{
	size_t	len;
	char	*new;

	if (!s1)
		return (NULL);
	len = ft_strlen(s1);
	if (len > n)
		len = n;
	new = (char *)malloc(sizeof(*new) * (len + 1));
	if (!new)
		return (NULL);
	new = ft_memcpy(new, s1, len);
	new[len] = '\0';
	return (new);
}
