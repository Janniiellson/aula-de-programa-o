#include <stdio.h>
/*12 - Faça um algoritmo que leia o valor de um produto e determine o valor que deve ser pago, 
conforme a escolha da forma de pagamento pelo comprador e imprima na tela o valor final do produto a ser pago. 
 Utilize os códigos da tabela de condições de pagamento para efetuar o cálculo adequado.
 
 Tabela de Código de Condições de Pagamento

 a - À Vista em Dinheiro ou Pix, recebe 15% de desconto

 b - À Vista no cartão de crédito, recebe 10% de desconto

 c - Parcelado no cartão em duas vezes, preço normal do produto sem juros

 d - Parcelado no cartão em três vezes ou mais, preço normal do produto mais juros de 10%*/
 
 int main()
 {
 	float vpd, vpg;
 	char fpg;
 	
 	printf("qual o valor do produto desejado?");
 	scanf("%f", &vpd);
 	
	printf("\n\nqual será a forma de pagamento?\n\n =======Tabela de Código de Condições de Pagamento=======\na -À Vista em Dinheiro ou Pix, recebe 15%% de desconto\nb -À Vista no cartão de crédito, recebe 10%% de desconto\nc - Parcelado no cartão em duas vezes, preço normal do produto sem juros\nd - Parcelado no cartão em três vezes ou mais, preço normal do produto mais juros de 10%%\n escolha:");
	
	scanf("%s", &fpg);
 	
 	if (fpg=='a')
	 {	
	printf("á vista dinheiro, cartão de debito ou pix\n");
	 
	 vpg = vpd - (vpd*15/100);
	 
	 printf("o valor a ser pago sera: %f", vpg);
	 }
	 else if (fpg=='b')
	 { 
	 printf("a vista Cartão de credito");
	 
	 vpg= vpd - (vpd*10/100);
	 
	  printf("o valor a ser pago sera: %f", vpg);
	  
	 }
 	else if (fpg=='c')
	 { 
	 printf("parcelado em até 2x no Cartão de credito");
	 
	 vpg=vpd;
	 
	 printf("o valor a ser pago sera: %f", vpg);
	 }
	else if (fpg=='d')
	{ 
	printf ("parcelado em mais de 3x no Cartão de credito");
	
	vpg=vpd + (vpd*10/100);
	
	printf("o valor a ser pago sera: %f", vpg);
	}
 	 else
	{
	printf("opção invalida");
	}
 	
 	return 0;
 }
