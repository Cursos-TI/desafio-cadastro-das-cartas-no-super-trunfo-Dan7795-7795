#include <stdio.h>
// desafio super trunfo


int main() {

// Carta 1
int codigo1,populacao1, pontosturisticos1;
char nome1[40], estado1 [30];
float area1, pib1;

// Carta 2
int codigo2, npopulacao2, pontosturisticos2;
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
printf("\ndigite os dados da cidade 2:");
printf("nome:");
scanf("%s", &nome2);

    return 0;
}