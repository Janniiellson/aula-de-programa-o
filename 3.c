/*Fa�a um programa que leia um n�mero inteiro e verifique se esse n�mero � par ou �mpar.*/
#include <stdlib.h>
#include <stdio.h>
int main(void)
{
    int num;
    printf("digite um numero inteiro: ");
    scanf("%d", &num);
    if (num % 2 == 0) // operador %
    {
        printf("Par");
    }
    else
        printf("�mpar");
}
