/*Schrader Rodríguez Luis Antonio
Tarea 2 Ejercicio 1*/

#include <stdio.h>

int main()
{
    float base = 0, altura = 0, area = 0;

    printf("Introduzca la base del triángulo: ");
    scanf("%f", &base);
    
    printf("Introduzca la altura del triángulo: ");
    scanf("%f", &altura);

    area = (base * altura) / 2; 

    printf("\nEl área del triángulo es: %2f\n", area);
}
