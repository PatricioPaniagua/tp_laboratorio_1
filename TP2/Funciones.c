#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int numeros(char str[])
{
    int i = 0;
    while(str[i] != '\0')
    {
        if(str[i] < '0' || str[i] > '9')
        {
            return 0;
        }
        i++;
    }
    return 1;
}
int letras(char str[])
{
    int i = 0;
    while(str[i] != '\0')
    {
        if((str[i] != ' ') && (str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
        {
            return 0;
        }
        i++;
    }
    return 1;
}
void strG(char mensaje[], char input[])
{
    printf("%s", mensaje);
    scanf("%s", input);
}
int strGNumeros(char mensaje[], char input[])
{
    char aux[256];
    strG(mensaje, aux);
    if(numeros(aux))
    {
        strcpy(input, aux);
        return 1;
    }
    return 0;
}
int strGLetras(char mensaje[], char input[])
{
    char aux[256];
    strG(mensaje, aux);
    if(letras(aux))
    {
        strcpy(input, aux);
        return 1;
    }
    return 0;
}
