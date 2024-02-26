#include <stdio.h>

int main()
{
    int a = 1;
    int *ptr = &a;

    printf("The variable a: %d\n", a);

    printf("The value of a using pointer: %d\n", *ptr);

    printf("The address of a: %p\n", &a);

    printf("The address of pointer to a: %p\n", &ptr);

    printf("The address of a using pointer: %p", ptr);

    return 0;
}