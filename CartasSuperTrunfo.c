#include <stdio.h>

int main(){

//carta 1
int numeros_pontos_turisticos = 0;
char estado[20], cod_carta[4], nome_cidade[15];
double area = 0, pib = 0, densidade_populacional = 0, pib_per_capita = 0, super_poder = 0;
unsigned long int populacao = 0;

//carta 2
char estado1[20], cod_carta1[4], nome_cidade1[15];
int numeros_pontos_turisticos1 = 0;
double area1 = 0, pib1 = 0, densidade_populacional1 = 0, pib_per_capita1 = 0, super_poder1 = 0;
unsigned long int populacao1 = 0;

//Criando cartas
//Carta 1
printf("======== Carta 1 ========\n");
printf("Escolha um estado: ");  //Estado
scanf("%19s", estado);

printf("!Código da carta!\nPara o código você deve escolher um número de 01 a 04 e colocar a letra (Exemplo: A01)\nEscolha: ");  //Código da carta
scanf("%s", cod_carta);

printf("Escolha o nome da cidade: "); //Nome da cidade
scanf("%s", nome_cidade);

printf("Número de habitantes da cidade: "); //Numero de habitantes da cidade
scanf("%lf", &populacao);

printf("A área da cidade: "); // Area da cidade
scanf("%lf", &area);

printf("O PIB (Produto Interno Bruto) da cidade: "); // PIB
scanf("%lf", &pib);

printf("Quantidade de pontos turísticos na cidade: "); // Numero de pontos turisticos
scanf("%d", &numeros_pontos_turisticos);
printf("\n\n");

//Carta 2
printf("======== Carta 2 ========\n");
printf("Escolha um estado: "); //Estado
scanf("%19s", estado1);

printf("!Código da carta!\nPara o código você deve escolher um número de 01 a 04 e colocar a letra (Exemplo: A01)\nEscolha: "); //Código da carta
scanf("%s", cod_carta1);

printf("Escolha o nome da cidade: "); //Nome da cidade
scanf("%s", nome_cidade1);

printf("Número de habitantes da cidade: "); //Numero de habitantes da cidade
scanf("%lf", &populacao1);

printf("A área da cidade: "); // Area da cidade
scanf("%lf", &area1);

printf("O PIB (Produto Interno Bruto) da cidade: "); // PIB
scanf("%lf", &pib1);

printf("Quantidade de pontos turísticos na cidade: "); // Numero de pontos turisticos
scanf("%d", &numeros_pontos_turisticos1);
printf("\n\n");

// Exibir cartas
//Carta 1
printf("Carta 1:\n");
printf("Estado: %s\n", estado);
printf("Código: %s\n", cod_carta);
printf("Nome da cidade: %s\n", nome_cidade);
printf("População: %.0f\n", populacao);
printf("Área: %.2f KM²\n", area);
printf("PIB: %.2f bilhões de reais\n", pib);
printf("Número de Pontos Turísticos: %d\n", numeros_pontos_turisticos);
printf("Densidade Populacional: %.2f hab/Km²\n", densidade_populacional = populacao / area);
printf("PIB per Capita: %.2f reais\n", pib_per_capita = pib / populacao);
printf("Super poder: %ld\n\n", super_poder = (populacao + area + pib + numeros_pontos_turisticos + pib_per_capita + densidade_populacional));

//população, área, PIB, número de pontos turísticos, PIB per capita e o inverso da densidade populacional

//Carta 2
printf("Carta 2:\n");
printf("Estado: %s\n", estado1);
printf("Código: %s\n", cod_carta1);
printf("Nome da cidade: %s\n", nome_cidade1);
printf("População: %.0f\n", populacao1);
printf("Área: %.2f KM²\n", area1);
printf("PIB: %.2f bilhões de reais\n", pib1);
printf("Número de Pontos Turísticos: %d\n", numeros_pontos_turisticos1);
printf("Densidade Populacional: %.2f hab/Km²\n", densidade_populacional1 = populacao1 / area1);
printf("PIB per Capita: %.2f reais\n", pib_per_capita1 = pib1 / populacao1);
printf("Super poder: %ld\n\n", super_poder1 = (populacao1 + area1 + pib1 + numeros_pontos_turisticos1 + pib_per_capita1 + densidade_populacional1));

printf("Comparação de cartas:\nOBS.: Se a carta tiver valor 1 ela venceu se tiver 0, perdeu/\n");
printf("População: Carta 1 venceu (%d)\n", populacao > populacao1);
printf("Área: Carta 1 venceu (%d)\n", area > area1);
printf("PIB: Carta 1 venceu (%d)\n", pib > pib1);
printf("Pontos Turísticos: Carta 1 venceu (%d)\n", numeros_pontos_turisticos > numeros_pontos_turisticos1);
printf("Desnsidade Populacional: Carta 1 venceu (%d)\n", densidade_populacional > densidade_populacional1);
printf("PIB per Capita: Carta 1 venceu (%d)\n", pib_per_capita > pib_per_capita1);
printf("Super Poder: Carta 1 venceu (%d)\n", super_poder > super_poder1);


/*
Comparação de Cartas:

População: Carta 1 venceu (1)

Área: Carta 1 venceu (1)

PIB: Carta 1 venceu (1)

Pontos Turísticos: Carta 1 venceu (1)

Densidade Populacional: Carta 2 venceu (0)

PIB per Capita: Carta 1 venceu (1)

Super Poder: Carta 1 venceu (1)
*/

return 0;
}