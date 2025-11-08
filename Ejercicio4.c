/*Schrader Rodríguez Luis Antonio
Tarea 2 Ejercicio 4*/

#include <stdio.h>
void main() 

{
    int MontoInvertido, TasaInteres, MontoFinal;

    printf("Ingresa la cantidad invertida: ");
    scanf("%d", &MontoInvertido);

    printf("Ingresa el porcentaje de la tasa de interés mensual: ");
    scanf("%d", &TasaInteres);

    MontoFinal = (MontoInvertido + (MontoInvertido * TasaInteres / 100));

    printf("Tu monto total es: %d\n", MontoFinal);

}
