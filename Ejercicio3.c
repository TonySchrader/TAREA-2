/*Schrader Rodríguez Luis Antonio
Tarea 2 Ejercicio 3*/

#include <stdio.h>

void main() 
{
    float Dolares$, PesosMXN;  
    float ValorMXN = 11.96;       

    printf("Dame la cantidad en dólares: ");
    scanf("%f", &Dolares$);

    PesosMXN = Dolares$ * ValorMXN;

    printf("\n%.2f dólares equivalen a %.2f pesos.\n", Dolares$, PesosMXN);

}
