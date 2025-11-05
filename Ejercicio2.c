/*Schrader Rodríguez Luis Antonio
Tarea 2 Ejercicio 2*/

#include <stdio.h>
#include <math.h>

void main() 
{
    int radio, area, circunf;   
    float pi = 3.1416;                  

    printf("Dame el radio del círculo: ");
    scanf("%d", &radio);

    area = pi * pow(radio, 2);
    circunf = 2 * pi * radio;

    printf("\nEl área del círculo es: %d", area);
    printf("\nLa circunferencia es: %d\n", circunf);

}
