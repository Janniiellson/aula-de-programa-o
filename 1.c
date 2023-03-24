#include <stdio.h>

//1.    Faça um programa que leia dois números e mostre qual deles é o maior.

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
	else
	{
		printf("o segundo numero eh maior que o primeiro ");
	}
	
	return 0;
}
