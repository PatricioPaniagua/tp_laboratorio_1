#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
int sumar(int a, int b);
int restar(int a, int b);
int dividir(int a, int b);
int multiplicar(int a, int b);
int factorial(int a);
int main()
{
    char seguir='s';
    int opcion=0;
    int num1;
    int num2;

    while(seguir=='s')
    {
        printf("1- Ingresar 1er operando (A=x)\n");
        printf("2- Ingresar 2do operando (B=y)\n");
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
        case 1:
            printf("Ingrese el número: ");
            scanf("%d", &num1);
            break;
        case 2:
            printf("Ingrese el segundo número: ");
            scanf("%d", &num2)
            break;
        case 3:
            sumar(num1, num2);
            printf("La suma es: %d", sumar);
            break;
        case 4:
            break;
        case 5:
            break;
        case 6:
            break;
        case 7:
            break;
        case 8:
            break;
        case 9:
            seguir = 'n';
            break;
        }


        return 0;
    }

}
