#include "libft.h"

int ft_atoi(const char* nptr)
{
	int parity;
	int result;

	result = 0;
	parity = 1;

	// spring the spaces
	while (*nptr == ' ' ||
		*nptr == '\t' ||
		*nptr == '\n' ||
		*nptr == '\v' ||
		*nptr == '\f' ||
		*nptr == '\r' )
	{
		++nptr;
	}
	
	while (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			parity *= -1;
		++nptr;
	}


	while (ft_isdigit(*nptr))
	{
		result *= 10;
		result += *nptr - '0';
		++nptr;
	}

	return (result * parity);
}