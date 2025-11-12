/*Schrader Rodríguez Luis Antonio
Tarea 2 Ejercicio 13*/

#include <stdio.h>

void main()
{
    int arr[4], i, suma = 0;
    
     i = 0;

    printf("Suma de enteros");

    for (i = 0; i < 4; i++)
    {
        printf("Dame el elemento %d del arreglo:", i+ 1);
        scanf("%d",&arr[i]);
        suma = suma + arr[i];
    }
    printf("\nLa suma total de los elementos del arreglo es: %d\n", suma);
}
