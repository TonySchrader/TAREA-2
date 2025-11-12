/*Schrader Rodríguez Luis Antonio
Tarea 2 Ejercicio 12*/

#include <stdio.h>

void main()
{
    int num, cont = 0;     
    int multip = 1;  

    printf("Producto de los primeros numeros naturales de N  ");
    printf("\nDame el valor de N: ");
    scanf("%d" , &num);

    while (cont < num)
    {
        multip = multip * (cont + 1);
        cont++;
    }

    printf("\nEl producto de los %d primeros numeros naturales es: %d\n", num, multip);
}
