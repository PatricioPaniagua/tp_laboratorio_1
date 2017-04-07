#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"



int main()
{

    char seguir='s';
    int opcion=0;
    int num1;
    int num2;
    int resSuma;
    int resResta;
    int resMul;
    int resDiv;
    int resFact;
    do
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
            printf("Ingrese el primer número: ");
            scanf("%d", &num1);
            break;
        case 2:
            printf("Ingrese el segundo número: ");
            scanf("%d", &num2);
            break;
        case 3:
            resSuma = sumar(num1, num2);
            printf("La suma es: %d\n", resSuma);
            break;
        case 4:
            resResta = restar(num1, num2);
            printf("La resta es: %d\n", resResta);
            break;
        case 5:
            resDiv = dividir(num1, num2);
            printf("La división es: %d\n", resDiv);
                                    break;
        case 6:
            resMul = multiplicar(num1, num2);
            printf("La multiplicación es: %d\n", resMul);
            break;
        case 7:
            resFact = factorial(num1);
            printf("El factorial es: %d\n", resFact);
            break;
        case 8:
            sumar(num1, num2);
            printf("La suma es: %d\n", sumar);
            restar(num1, num2);
            printf("La resta es: %d\n", restar);
            dividir(num1, num2);
            printf("La división es: %d\n", dividir);
            multiplicar(num1, num2);
            printf("La multiplicación es: %d\n", multiplicar);
            factorial(num1);
            printf("El factorial es: %d\n", factorial);
            break;
        case 9:
            seguir = 'n';
            break;
        }
    }
    while(seguir=='s');

    return 0;

}


