#include <stdio.h>
int main() 
{
    int a, b, c;
    printf("Valor 1: ");
    scanf("%d", &a);
    printf("Valor 2: ");
    scanf("%d", &b);
    while (a <= 0 || b <= 0 || a < b)
    {
        printf("\nLos valores deben ser positivos y el primero mayor.\n");
        printf("Valor 1: ");
        scanf("%d", &a);
        printf("Valor 2: ");
        scanf("%d", &b);
    }
    c = a % b;
    while (c != 0)
    {
        a = b;
        b = c;
        c = a % b;
    }
    printf("\nEl MCD es: %d\n", b);
    return 0;
}
