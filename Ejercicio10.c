/*Schrader Rodríguez Luis Antonio
Tarea 2 Ejercicio 10*/

#include <stdio.h>

void main()
{
    int num, cont = 0;              
    int posit = 0, negs = 0, nulos = 0;

    printf("Conteo de números positivos, negativos y nulos");
    
    while (cont < 100)
    {
        printf("\nDame un número %d: ", cont + 1);
        scanf("%d", &num);

        if ( 0 < num) 
            posit++;
        
        else if (0 > num) 
            negs++;
        
        else
            nulos++; cont++;
    }
    printf("\nNúmeros positivos: %d\n", posit);
    printf("Números negativos: %d\n", negs);
    printf("Números nulos: %d\n", nulos);
}
