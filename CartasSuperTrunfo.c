#include <stdio.h>

int main(){

//carta 1
int numeros_pontos_turisticos = 0;
char estado[20], cod_carta[4], nome_cidade[15];
double area = 0, pib = 0, populacao = 0, densidade_populacional = 0, pib_per_capita = 0;

//carta 2
char estado1[20], cod_carta1[4], nome_cidade1[15];
int numeros_pontos_turisticos1 = 0;
double area1 = 0, pib1 = 0, populacao1 = 0, densidade_populacional1 = 0, pib_per_capita1 = 0;

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
printf("PIB per Capita: %.2f reais\n\n", pib_per_capita = pib / populacao);

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
printf("PIB per Capita: %.2f reais", pib_per_capita1 = pib1 / populacao1);


return 0;
}