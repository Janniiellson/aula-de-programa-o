#include <stdio.h>

//2.   Faça um programa que leia dois números e mostre o maior deles. Se, por acaso, 
//os dois números forem iguais, imprima a mensagem     
//“Números iguais”.

int main()
{
	int num1, num2;
	
	printf("defina o primeiro numero: ");
	scanf("%d", &num1);	
	printf("defina o segundo numero: ");
	scanf("%d", &num2);	
	
	if (num1>num2)
	{
		printf("o primeiro numero eh maior que o segundo ");
	}
	else if (num1==num2)
	{
		printf("ambos os numeros são iguais ");
	}
	else 
	{
		printf("o segundo numero eh maior que o primeiro ");
	}
	
	return 0;
}
