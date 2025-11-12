/*Schrader Rodríguez Luis Antonio
Tarea 2 Ejercicio 14*/

#include <stdio.h>
void main()
{
  int arr[10]; 
  num; 
  cont = 0; 
  i;
  
  i = 0;

    printf("Numero repetido en un arreglo\n");
    for (i = 0; i< 10; i++)
    {
        printf("Ingrese el elemento %d del arreglo: ", i + 1);
        scanf("%d" ,&arr[i]);
    }

    printf("\nIngrese el número que desea buscar en el arreglo: ");
    scanf("%d", &num);

    for (i = 0; i < 10; i++)
    {
        if (arr[i] == num)
        {
            cont++;
        }
    }
    printf("\nEl número %d aparece %d veces en el arreglo.\n", num,cont);
}
