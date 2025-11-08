#include <stdio.h> 
#define MAX 5 
int main () 
{ 
    int arreglo[MAX], cont; 
    for (cont=0; cont<MAX; cont++) 
    { 
        printf("Ingrese el valor %d del arreglo: ", cont+1); 
        scanf("%i", &arreglo[cont]); 
    } 
    printf("El valor ingresado para cada elemento del arreglo es:\n["); 
    for (cont=0; cont<MAX; cont++) 
    { 
        printf("%d\t", arreglo[cont]); 
    } 
    printf("]\n"); 
    return 0; 
}
