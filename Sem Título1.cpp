#include <stdio.h>
/*12 - Fa�a um algoritmo que leia o valor de um produto e determine o valor que deve ser pago, 
conforme a escolha da forma de pagamento pelo comprador e imprima na tela o valor final do produto a ser pago. 
 Utilize os c�digos da tabela de condi��es de pagamento para efetuar o c�lculo adequado.
 
 Tabela de C�digo de Condi��es de Pagamento

 a - � Vista em Dinheiro ou Pix, recebe 15% de desconto

 b - � Vista no cart�o de cr�dito, recebe 10% de desconto

 c - Parcelado no cart�o em duas vezes, pre�o normal do produto sem juros

 d - Parcelado no cart�o em tr�s vezes ou mais, pre�o normal do produto mais juros de 10%*/
 
 int main()
 {
 	float vpd, vpg;
 	char fpg;
 	
 	printf("qual o valor do produto desejado?");
 	scanf("%f", &vpd);
 	
	printf("\n\nqual ser� a forma de pagamento?\n\n =======Tabela de C�digo de Condi��es de Pagamento=======\na -� Vista em Dinheiro ou Pix, recebe 15%% de desconto\nb -� Vista no cart�o de cr�dito, recebe 10%% de desconto\nc - Parcelado no cart�o em duas vezes, pre�o normal do produto sem juros\nd - Parcelado no cart�o em tr�s vezes ou mais, pre�o normal do produto mais juros de 10%%\n escolha:");
	
	scanf("%s", &fpg);
 	
 	if (fpg=='a')
	 {	
	printf("� vista dinheiro, cart�o de debito ou pix\n");
	 
	 vpg = vpd - (vpd*15/100);
	 
	 printf("o valor a ser pago sera: %f", vpg);
	 }
	 else if (fpg=='b')
	 { 
	 printf("a vista Cart�o de credito");
	 
	 vpg= vpd - (vpd*10/100);
	 
	  printf("o valor a ser pago sera: %f", vpg);
	  
	 }
 	else if (fpg=='c')
	 { 
	 printf("parcelado em at� 2x no Cart�o de credito");
	 
	 vpg=vpd;
	 
	 printf("o valor a ser pago sera: %f", vpg);
	 }
	else if (fpg=='d')
	{ 
	printf ("parcelado em mais de 3x no Cart�o de credito");
	
	vpg=vpd + (vpd*10/100);
	
	printf("o valor a ser pago sera: %f", vpg);
	}
 	 else
	{
	printf("op��o invalida");
	}
 	
 	return 0;
 }
