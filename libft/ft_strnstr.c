#include "libft.h"

char* ft_strnstr(const char* big, const char* little, size_t len)
{
	size_t big_len;
	size_t little_len;
	size_t i;
	size_t j;
	int match;

	i = 0;
	j = 0;
	big_len = ft_strlen(big);
	little_len = ft_strlen(little);

	if (little_len == 0)
		return ((char*)big);

	while (i < len && i <= big_len - little_len )
	{
		j = 0;
		match = 1;
		while (j < little_len)
		{
			if (big[i + j] != little[j])
			{
				match = 0;
				break;
			}
			j++;
		}
		if (match == 1)
		{
			return ((char*)(big + i));
		}
		i++;
	}

	return NULL;
}