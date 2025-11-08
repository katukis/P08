#include <stdio.h> 
int main () 
{ 
  int enteroNumAlumnos = 5; 
  float realCalif = 0.0, realPromedio = 0.0; 
  printf("\tPromedio de calificaciones\n"); 
  for (int indice = 0 ; indice < enteroNumAlumnos ; indice++) 
  { 
    printf("\nIngrese la calificación del alumn %d\n", indice+1); 
    scanf("%f",&realCalif); 
    realPromedio += realCalif; 
  } 
  printf("\nEl promedio de las calificaciones ingresadas es: %f\n",   
  realPromedio/enteroNumAlumnos); 
  return 0; 
} 
