#include "libft.h"
#include <stdio.h>
#include <string.h>


int main()
{
    const char* str = "Hello, World!";

    // Testing strdup
    char* dup1 = ft_itoa(1235421413513512513);
    printf("1235 result: %s\n", dup1);
    free(dup1);

    // Testing ft_strdup
    char* dup2 = ft_itoa(-1235);
    printf("-1235 result: %s\n", dup1);
    free(dup2);

    return 0;
}
