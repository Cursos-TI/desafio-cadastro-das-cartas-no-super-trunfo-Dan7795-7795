#include <stdio.h>
// desafio super trunfo


int main() {

// Carta 1
int codigo1,populacao1, pontosturisticos1;
char nome1[40], estado1 [30];
float area1, pib1;

// Carta 2
int codigo2, populacao2, pontosturisticos2;
char nome2 [40], estado2 [30];
float area2, pib2;


// CADASTRO DA CARTA 1

printf("digite os dados da cidade 1:\n");
printf("nome:");
scanf("%s",&nome1);

printf("estado:");
scanf("%s", &estado1);

printf("codigo:");
scanf("%d", &codigo1);

printf("populacao:");
scanf("%d", &populacao1);

printf("area(em km²):");
scanf("%f",&area1);

printf("PIB (em bilhoes):");
scanf("%f", &pib1);

printf("pontos turisticos:");
scanf("%d", &pontosturisticos1);


// CADASTRO DA CARTA 2
printf("\ndigite os dados da cidade 2:\n");
printf("nome:");
scanf("%s", &nome2);

printf("estado:");
scanf("%s", &estado2);

printf("codigo:");
scanf("%d", &codigo2);

printf("populacao:");
scanf("%d", &populacao2);

printf("area(em km²):");
scanf("%f", &area2);

printf("PIB(em bilhoes):");
scanf("%f", &pib2);

printf("pontos turisticos:");
scanf("%d",&pontosturisticos2);

// EXIBIÇAO DAS CARTAS 
// carta 1
printf("\n--- carta cidade 1---\n");
printf("nome: %s\n",nome1);
printf("estado: %s\n", estado1);
printf("codigo: %d\n", codigo1);
printf("populaçao: %d\n", populacao1);
printf("area:%.2f em km²\n", area1);
printf("PIB: R$ %.2f bilhoes\n", pib1);
printf("pontos turisticos:%d\n", pontosturisticos1);

// carta 2


printf("\n--- carta cidade 2---\n");
printf("nome: %s\n",nome2);
printf("estado: %s\n", estado2);
printf("codigo: %d\n", codigo2);
printf("populaçao: %d\n", populacao2);
printf("area:%.2f em km²\n", area2);
printf("PIB: R$ %.2f bilhoes\n", pib2);
printf("pontos turisticos:%d\n", pontosturisticos2);


    return 0;
}