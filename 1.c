#include <stdio.h>

//1.    Fa�a um programa que leia dois n�meros e mostre qual deles � o maior.

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
