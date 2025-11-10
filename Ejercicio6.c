/*Schrader Rodríguez Luis Antonio
Tarea 2 Ejercicio 6*/

#include <stdio.h>

void main()
{
    int sueldo1, aumento, sueldo2;

    printf("Ingresa el sueldo del trabajador: $");
    scanf("%d", &sueldo1);

    if (sueldo1 < 1000)
    {
        aumento = sueldo1 * 0.15;
    }
    else
    {
        aumento = sueldo1 * 0.12;
    }
    sueldo2 = sueldo1 + aumento;

    printf("\nEl sueldo con aumento es: %d\n", sueldo2);
}
