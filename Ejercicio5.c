/*Schrader Rodríguez Luis Antonio
Tarea 2 Ejercicio 5*/

#include <stdio.h>

void main() 
{
    int monto, descuento, total; 
    
    printf("Ingresa el monto total de tu compra: $");
    scanf("%d", &monto);

    if (monto > 2500) 
    {
        descuento = monto * 0.08;
        total = monto - descuento;
    } 
        
    else 
    {
        total = monto;               
    }

    printf("El total a pagar es: $%d\n", total);
}
