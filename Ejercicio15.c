/*Schrader Rodríguez Luis Antonio
Tarea 2 Ejercicio 15*/

#include <stdio.h>

void main()
{
    int arr[10], int i, posit = 0, negs = 0, nulos = 0;
    
    i=0;

    printf("Contar números positivos, negativos y nulos");

    for (i = 0; i < 10; i++)
    {
        printf("\nDame el número %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < 10; i++)
    {
        if (arr[i] > 0)
        {
            posit++;
        }
        else if (arr[i] < 0)
        {
            negs++;
        }
        else
        {
            nulos++;
        }
    }
    printf("\nConteo de numeros: \n");
    printf("Números positivos: %d\n", posit);
    printf("Números negativos: %d\n", negs);
    printf("Números nulos: %d\n", nulos);
}
