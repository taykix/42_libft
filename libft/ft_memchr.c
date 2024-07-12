#include "libft.h"

void* ft_memchr(const void* s, int c, size_t n)
{
	const unsigned char* target;
	size_t i;

	target = (const unsigned char*)s;
	i = 0;

	while (target[i] && i < n)
	{
		if (target[i] == (unsigned char)c)
		{
			return (void*)(target + i);
		}
		i++;
	}

	return NULL;

}