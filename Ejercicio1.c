/*Schrader Rodríguez Luis Antonio
Tarea 2 Ejercicio 2*/

#include <stdio.h>

int main() 
{
    int num1, num2, suma, resta, mult; 

    printf("Ingrese el primer número: ");
    scanf("%d", &num1);

    printf("Ingrese el segundo número: ");
    scanf("%d", &num2);

    suma = num1 + num2;
    resta = num1 - num2;
    mult = num1 * num2;

    printf("\nLa suma es: %d\n", suma);
    printf("La resta es: %d\n", resta);
    printf("La multiplicación es: %d\n", mult);

    return 0;
}
