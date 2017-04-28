#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"
#define CANTPER 20

typedef struct
{
    char nombre[50];
    int edad;
    int dni;
    int estado;
} ePersonas;

int value = -1;
void iniciar(ePersonas array[], int cantElem, int value);
int buscar(ePersonas array[], int cantElem, int value);

int main()
{
    ePersonas array[CANTPER];
    ePersonas auxNom;
    char auxNombre[50];
    int auxEdad;
    int auxDni;


    int lugar;
    int resultado;
    int i,j;

    void iniciar(array, CANTPER, value);

    char seguir='s';
    int opcion=0;

    while(seguir=='s')
    {
        printf("1- Agregar persona\n");
        printf("2- Borrar persona\n");
        printf("3- Imprimir lista ordenada por  nombre\n");
        printf("4- Imprimir grafico de edades\n\n");
        printf("5- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
        case 1:
            lugar = buscar(array, CANTPER, value);
            if(lugar  == -1)
            {
                printf("No hay lugar para ingresar más personas.");
            }
            printf("1- Agregar persona\n");
            if(!strGLetras("Ingrese el nombre ", auxNombre))
            {
                printf("Solo se pueden ingresar letras.");
                break;
            }
            if(!strGNumeros("Ingrese la edad ", auxEdad))
            {
                printf("Solo se pueden ingresar numeros.");
                break;
            }
            if(!strGNumeros("Ingrese el dni ", auxDni))
            {
                printf("Solo se pueden ingresar numeros.");
                break;
            }

            strcpy(array[lugar].nombre, auxNombre);
            strcpy(array[lugar].edad, auxEdad);
            strcpy(array[lugar].dni, auxDni);
            break;

        case 2:
            if(!strGNumeros("Ingrese el dni de la persona a ser eliminada:", auxDni))
            {
                printf("Solo se pueden ingresar numeros.");
                break;
            }
            resultado = buscar(array, CANTPER, auxDni);
            if(resultado == -1)
            {
                printf("Ese dni no se encuentra registrado.");
                break;
            }
            array[resultado].dni = -1;
            break;
        case 3:
            for(i = 0; i < CANTPER - 1; i++)
            {
                if(array[i].nombre == -1)
                {
                    continue;
                }
                for(j = i + 1; j < CANTPER; j++)
                {
                    if(array[j].nombre == -1)
                    {
                        continue;
                    }
                    if(strcmp(array[i].dni, array[j].dni) > 0)
                    {
                        auxNom = array[j];
                        array[j] = array[i];
                        array[i] = auxNom;
                    }
                }
            }
            break;
        case 4:
            break;
        case 5:
            seguir = 'n';
            break;
        }
    }

    return 0;
}
