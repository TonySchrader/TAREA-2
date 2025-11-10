/*Schrader Rodríguez Luis Antonio
Tarea 2 Ejercicio 7*/

#include <stdio.h>

void main() 
{
    float dist, dias, precioKm = 0.23, precio, descuento, total;

    printf("Ingresa la distancia en kilometros: ");
    scanf("%f", &dist);

    printf("Ingresa el número de días en estancia: ");
    scanf("%f", &dias);

    precio = dist * precioKm;

    if (dias > 7 && dist > 800) 
    {
        descuento = precio * 0.30;           
        total = precio - descuento;     
    } 
    else 
    {
        total = precio;                 
    }
    printf("\nEl precio del ticket es: $ %f\n", total);
}
