#include <stdio.h>

int main() {

//Variaveis carta 1    

char estado1;
char codigo1[4];
char cidade1[20];
unsigned long int populacao1;
float area1;
float pib1;
int turismo1;
float densi1;
float capita1;
float superPoder1;

//variaveis carta 2
char estado2;
char codigo2[4];
char cidade2[20];
unsigned long int populacao2;
float area2;
float pib2;
int turismo2;
float densi2;
float capita2;
unsigned long int superPoder2;


//Pedindo informações carta 1
printf("----- INFORMAÇÕES CARTA 1 -----\n");
printf ("\n");

printf("Digite uma letra de um estado (De A a H):");
scanf(" %c",&estado1);

printf("Digite seu código (Letra do Estado e um número de 01 a 04):");
scanf("%s",&codigo1);

printf("Digite o nome da cidade:");
scanf("%s",&cidade1);

printf("Digite o numero da população:");
scanf("%lu",&populacao1);

printf("Digite o tamanho da área (Em quilômetros quadrados):");
scanf("%f",&area1);

printf("Digite o PIB:");
scanf("%f",&pib1);

printf("Digite o numero de pontos turísticos:");
scanf("%d",&turismo1);

densi1 = (float) (populacao1 / area1);

capita1 = (float) (pib1 * 1000000000 / populacao1);

superPoder1= (int) (populacao1 + area1 + pib1 + turismo1 + (populacao1 * area1) + capita1);


printf("\n");

//pedindo informações carta 2

printf("----- PEDINDO INFORMAÇÕES CARTA 2 -----\n");
printf("\n");

printf("Digite uma letra de um estado (De A a H):");
scanf(" %c", &estado2);

printf("Digite seu código (Letra do Estado e um número de 01 a 04):");
scanf("%s",&codigo2);

printf("Digite o nome da cidade:");
scanf(" %s",&cidade2);

printf("Digite o numero da população:");
scanf("%lu",&populacao2);

printf("Digite o tamanho da área (Em quilômetros quadrados):");
scanf("%f",&area2);

printf("Digite o PIB:");
scanf("%f",&pib2);

printf("Digite o numero de pontos turísticos:");
scanf("%d",&turismo2);

densi2 = (float) (populacao2 / area2);

capita2 = (float) (pib2 * 1000000000 / populacao2);

superPoder2 = (int) (populacao2 + area2 + pib2 + turismo2 + (populacao2 * area2) + capita2);


printf("\n");

//Mostrando no terminal carta 1

printf("----- CARTA 1 -----\n");
printf("Estado: %c\n",estado1);
printf("Seu código: %s\n",codigo1);
printf("Nome da cidade: %s\n",cidade1);
printf("População: %lu\n",populacao1);
printf("Área: %.2f km²\n",area1);
printf("PIB: %.2f bilhões de reais\n",pib1);
printf("Número de pontos turísticos: %d\n",turismo1);
printf("Densidade Populacional: %.2f hab/km²\n", densi1);
printf("PIB per Capita: %.2f reais\n",capita1);


printf("\n");

//mostrando no terminal a carta 2
printf("----- CARTA 2 -----\n");
printf("Estado: %c\n",estado2);
printf("Seu código: %s\n",codigo2);
printf("Nome da cidade: %s\n",cidade2);
printf("População: %lu\n",populacao2);
printf("Área: %.2f km²\n",area2);
printf("PIB: %.2f bilhões de reias\n",pib2);
printf("Número de pontos turísticos: %d\n",turismo2);
printf("Densidade Populacional: %.2f hab/km²\n",densi2);
printf("PIB per Capita: %.2f reais\n",capita2);

printf("\n");

//Comparação

int populacao = populacao1 > populacao2;
int area = area1 > area2;
int pib = pib1 > pib2;
int turismo = turismo1 > turismo2;
int densidade = densi1 < densi2;
int capital = capita1 > capita2;
int superPoder = superPoder1 > superPoder2;

printf ("----- COMPARAÇÃO DE CARTAS -----\n");

printf("\n");

printf("População:Carta 1 venceu (%d)\n",populacao);
printf("Área:Carta 1 venceu (%d)\n",area);
printf("PIB:carta 1 venceu (%d)\n",pib);
printf("Pontos Turísticos: Carta 1 (%d)\n",turismo);
printf("Densidade Populacional: Carta 2 venceu (%d)\n",densidade);
printf("PIB per Capita: Carta 1 (%d)\n",capital);
printf("Super Poder: Carta 1 venceu (%d)\n",superPoder);

printf("\n");

printf("----- FIM -----");

return 0;

}