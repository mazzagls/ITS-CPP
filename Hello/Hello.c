#include <stdio.h>

int main()
{
    printf("Hello World!!\n\n\n");

    char name[32];

    printf("Enter a name: ");

    scanf("%s", name);

    printf("\nHello\t%s\n\n\n", name);

    return 0;
}