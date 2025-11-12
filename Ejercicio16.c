/*Schrader Rodríguez Luis Antonio
Tarea 2 Ejercicio 16*/

#include <stdio.h>
void main()
{
    int arrPar[100], i,numPar = 2;
    
    i = 0;

    printf("Arreglo de los primeros 100 numeros pares");

    for (i = 0; i < 100;i++)
    {
        arrPar[i] = numPar;
        numPar += 2;
    }
    
    printf("\nLos primeros 100 números pares son:\n");
    for (i=0; i < 100; i++)
    {
        printf("%d ", arrPar[i]);

        if ((i + 1) % 10 == 0)
        {
            printf("\n");
        }
    }
}
