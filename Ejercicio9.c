/* Schrader Rodríguez Luis Antonio
Tarea 2 Ejercicio 9*/

#include <stdio.h>

void main()
{
    int num, cont = 1;

    printf("Tabla de multiplicar\n");
    printf("Ingrese un número:");
    scanf("%d",&num);
  
    printf("La tabla de multiplicar del %d es:\n", num);

    while (cont <= 10)
    {
        printf("%d x %d = %d\n", num, cont, num * cont);
        cont++;
    }
}
