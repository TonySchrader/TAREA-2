/*Schrader Rodríguez Luis Antonio
Tarea 2 Ejercicio 8*/

#include <stdio.h>
void main() 
{
    int num1, num2;
    
    printf("Dame el primer número: ");
    scanf("%d", &num1);

    printf("Dame el segundo número: ");
    scanf("%d", &num2);

    if (num2 != 0) 
    { 
        if (num1 % num2 == 0)
        {
            printf("\n%d es divisor de %d\n", num2, num1);
        }
            else
            {
                printf("\n%d no es divisor de %d\n", num2, num1);
            }
    } 
    else 
    {
        printf("\nNo se puede dividir entre cero.\n");
    }
}
