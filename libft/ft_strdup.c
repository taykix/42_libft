#include "libft.h"

char* ft_strdup(const char* s)
{
	size_t len_s;
	char* arr;
	char* ptr;

	len_s = ft_strlen(s);
	arr = malloc((len_s + 1) * sizeof(char));

	if (!arr)
		return NULL;

	ptr = arr;
	while (*s)
	{
		*arr++ = *s++;
	}
	*arr = '\0';

	return (ptr);
}