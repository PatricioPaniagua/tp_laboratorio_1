#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int sumar(int x, int y)
{
    int suma;
    suma = x+y;
    return suma;
}
int restar(int x, int y)
{
    int resta;
    resta = x-y;
    return resta;
}
int dividir(int x, int y)
{
    int division;
    division = x/y;
    return division;
}
int multiplicar(int x, int y)
{
    int multiplicacion;
    multiplicacion = x*y;
    return multiplicacion;
}
int factorial(int x)
{
    int factor = 1;
    int i;
    for(i=x; i>0; i--)
    {
        factor = factor * i;
    }
}

