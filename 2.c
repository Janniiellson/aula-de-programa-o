#include <stdio.h>

//2.   Fa�a um programa que leia dois n�meros e mostre o maior deles. Se, por acaso, 
//os dois n�meros forem iguais, imprima a mensagem     
//�N�meros iguais�.

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
		printf("ambos os numeros s�o iguais ");
	}
	else 
	{
		printf("o segundo numero eh maior que o primeiro ");
	}
	
	return 0;
}
