#include "libft.h"
#include <stdio.h>
#include <string.h>


int main()
{
    const char* str = "Hello, World!";

    // Testing strdup
    char* dup1 = strdup(str);
    printf("strdup result: %s\n", dup1);
    free(dup1);

    // Testing ft_strdup
    char* dup2 = ft_strdup(str);
    printf("ft_strdup result: %s\n", dup2);
    free(dup2);

    return 0;
}