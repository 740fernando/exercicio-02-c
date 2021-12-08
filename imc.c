#include <stdio.h>

void main()
{
float altura, peso, imc;
char nome[50];

printf("NOME: ");
scanf("%s", &nome);
printf("ALTURA: ");
scanf("%f", &altura);
printf("PESO: ");
scanf("%f", &peso);

imc = (peso / (altura*altura));

printf("\n%s ", nome);
printf("%f", imc);
}