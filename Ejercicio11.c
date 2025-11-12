/* Schrader Rodríguez Luis Antonio
   Tarea 2 Ejercicio 11 */

#include <stdio.h>

void main()
{
    int num = 10;
    int sumPar = 0;

    printf("Suma de números pares comprendidos entre 10 y 50");

    while (num <= 50)
    {
        if (num % 2 == 0)
        {
            sumPar += num;
        }
        num++;
    }

    printf("\nLa suma de los números pares comprendidos entre 10 y 50 es: %d\n", sumPar);
}
