#include "libft.h"

char* ft_strrchr(const char* s, int c)
{
	size_t s_size;

	s_size = ft_strlen(s);

	if (c == '\0')
	{
		return (char*)(s + s_size);
	}
	s_size--;

	while (s_size > 0)
	{
		if (s[s_size] == (char)c)
		{
			return (char*)(s + s_size);
		}
		s_size--;
	}

	if (c == s[0])
		return (char*)(s);

	return NULL;
}