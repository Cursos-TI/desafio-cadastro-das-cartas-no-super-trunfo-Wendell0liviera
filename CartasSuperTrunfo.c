#include <stdio.h>

int main() {

//Variaveis carta 1    

char estado1;
char codigo1[4];
char cidade1[20];
int populacao1;
float area1;
float pib1;
int turismo1;

//variaveis carta 2
char estado2;
char codigo2[4];
char cidade2[20];
int populacao2;
float area2;
float pib2;
int turismo2;

//Pedindo informações carta 1

printf("Digite uma letra de um estado (De A a H):");
scanf(" %c",&estado1);

printf("Digite seu código (Letra do Estado e um número de 01 a 04):");
scanf("%s",&codigo1);

printf("Digite o nome da cidade:");
scanf("%s",&cidade1);

printf("Digite o numero da população:");
scanf("%d",&populacao1);

printf("Digite o tamanho da área (Em quilômetros quadrados):");
scanf("%f",&area1);

printf("Digite o PIB:");
scanf("%f",&pib1);

printf("Digite o numero de pontos turísticos:");
scanf("%d",&turismo1);

printf("\n");

//pedindo informações carta 2

printf("Digite uma letra de um estado (De A a H):");
scanf(" %c", &estado2);

printf("Digite seu código (Letra do Estado e um número de 01 a 04):");
scanf(" %s",&codigo2);

printf("Digite o nome da cidade:");
scanf(" %s",&cidade2);

printf("Digite o numero da população:");
scanf("%d",&populacao2);

printf("Digite o tamanho da área (Em quilômetros quadrados):");
scanf("%f",&area2);

printf("Digite o PIB:");
scanf("%f",&pib2);

printf("Digite o numero de pontos turísticos:");
scanf("%d",&turismo2);

printf("\n");

//Mostrando no terminal carta 1

printf("Carta 1:\n");
printf("Estado: %c\n",estado1);
printf("Seu código: %s\n",codigo1);
printf("Nome da cidade: %s\n",cidade1);
printf("População: %d\n",populacao1);
printf("Área: %.2f km²\n",area1);
printf("PIB: %.2f bilhões de reais\n",pib1);
printf("Número de pontos turísticos: %d\n",turismo1);

printf("\n");

//mostrando no terminal a carta 2
printf("Carta 2:\n");
printf("Estado: %c\n",estado2);
printf("Seu código: %s\n",codigo2);
printf("Nome da cidade: %s\n",cidade2);
printf("População: %d\n",populacao2);
printf("Área: %.2f km²\n",area2);
printf("PIB: %.2f bilhões de reias\n",pib2);
printf("Número de pontos túristicos: %d\n",turismo2);


    return 0;
}
