/*Fa�a um programa que leia o sal�rio de um trabalhador e o valor da     presta��o de um empr�stimo. 
Se a presta��o, for maior que 20% do sal�rio, imprima: �Empr�stimo n�o concedido.�, caso contr�rio, imprima: 
�Empr�stimo concedido.�*/


#include <stdio.h>

int main(void)
{
    float salario;
    float emprestimo;
    scanf("%f %f", &salario, &emprestimo);
    printf("emprestimo%s concedido", emprestimo / salario <= 1.2 ? "" : " nao");
}

