#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
//carta 1
int numeros_pontos_turisticos = 0;
char estado[20], cod_carta[4], nome_cidade[15];
float area = 0, pib = 0, populacao = 0;

//carta 2
char estado1[20], cod_carta1[4], nome_cidade1[15];
int numeros_pontos_turisticos1 = 0;
float area1 = 0, pib1 = 0, populacao1 = 0;

//Criando cartas
//Carta 1
printf("======== Carta 1 ========\n");
printf("Escolha um estado: "); 
scanf("%19s", estado);

printf("!Código da carta!\nPara o código você deve escolher um número de 01 a 04 e colocar a letra (Exemplo: A01)\nEscolha: "); 
scanf("%s", cod_carta);

printf("Escolha o nome da cidade: "); 
scanf("%s", nome_cidade);

printf("Número de habitantes da cidade: "); 
scanf("%f", &populacao);

printf("A área da cidade: "); 
scanf("%f", &area);

printf("O PIB (Produto Interno Bruto) da cidade: "); 
scanf("%f", &pib);

printf("Quantidade de pontos turísticos na cidade: "); 
scanf("%d", &numeros_pontos_turisticos);
printf("\n\n");

//Carta 2
printf("======== Carta 2 ========\n");
printf("Escolha um estado: "); 
scanf("%19s", estado1);

printf("!Código da carta!\nPara o código você deve escolher um número de 01 a 04 e colocar a letra (Exemplo: A01)\nEscolha: "); 
scanf("%s", cod_carta1);

printf("Escolha o nome da cidade: "); 
scanf("%s", nome_cidade1);

printf("Número de habitantes da cidade: "); 
scanf("%f", &populacao1);

printf("A área da cidade: "); 
scanf("%f", &area1);

printf("O PIB (Produto Interno Bruto) da cidade: "); 
scanf("%f", &pib1);

printf("Quantidade de pontos turísticos na cidade: "); 
scanf("%d", &numeros_pontos_turisticos1);
printf("\n\n");

// Exibir cartas
//Carta 1
printf("Carta 1:\n");
printf("Estado: %s\n", estado);
printf("Código: %s\n", cod_carta);
printf("Nome da cidade: %s\n", nome_cidade);
printf("População: %.2f\n", populacao);
printf("Área: %.2f KM²\n", area);
printf("PIB: %.2f bilhões de reais\n", pib);
printf("Número de Pontos Turísticos: %d\n\n", numeros_pontos_turisticos);

//Carta 2
printf("Carta 2:\n");
printf("Estado: %s\n", estado1);
printf("Código: %s\n", cod_carta1);
printf("Nome da cidade: %s\n", nome_cidade1);
printf("População: %.2f\n", populacao1);
printf("Área: %.2f KM²\n", area1);
printf("PIB: %.2f bilhões de reais\n", pib1);
printf("Número de Pontos Turísticos: %d\n\n", numeros_pontos_turisticos1);

return 0;
}
