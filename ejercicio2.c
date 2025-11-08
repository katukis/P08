#include <stdio.h>
#define LIM 10
int main() 
{

    int datos[LIM];
    int valor;
    int i;
    printf("Captura de %d numeros pares:\n\n", LIM);
    for (i = 0; i < LIM; i++) {
        printf("Posicion %d: ", i);
        scanf("%d", &valor);
        while (valor % 2 != 0)
          {
            printf("   El numero no es par. Intente nuevamente: ");
            scanf("%d", &valor);
          }
        datos[i] = valor;
    }
    printf("\nContenido del arreglo:\n");
    for (i = 0; i < LIM; i++) {
        printf("[%d] ", datos[i]);
    }
    printf("\n");
    return 0;
}
