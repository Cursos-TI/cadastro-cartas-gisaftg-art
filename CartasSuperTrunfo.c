#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  //a orientação inicial sera de criar 2 cartas e ainda não aprendi a duplicar os registros então vai ter que ser um por carta
  // carta 1
  char estado [30];
  char codigo [3];
  char cidade [30]; 
  int populacao;
  float area;
  float PIB;
  int pontot;
  // Área para entrada de dados

  //introdução
 printf("Olá, para iniciar o jogo precisamos realizar o cadastro das cartas de cada cidade, vamos lá?\n");

 //estado
 printf("Informe qual é o Estado:\n");
  scanf("%s",&estado);

  // codigo da carta
  printf("Informe qual será o código: (ex: A01) \n");
  scanf("%s",&codigo);

  //cidade
   printf("Informe qual é a cidade: \n");
  scanf("%s",&cidade);

  // população
  printf("Informe qual é a população: \n");
  scanf("%d",&populacao);

  //area
   printf("Informe qual é a Área de Km²: \n");
  scanf("%f",&area);

  //pib
   printf("Informe qual é o PIB: \n");
  scanf("%f",&PIB);

  //pontos turisticos
  printf("Informe qual o número de pontos turisticos: \n");
  scanf("%d",&pontot);
  // Área para exibição dos dados da cidade

  //encerramento
printf("\n Muito Bem! Estes são os dados da carta que acabamos de registrar: \n");


  // codigo da carta
  printf("Código da carta:%s\n",codigo);

   //estado
  printf("Estado:%s\n",estado);

  //cidade
   printf("Cidade:%s\n",cidade);

  // população
  printf("População:%d\n",populacao);

  //area
   printf("Área de Km²:%f\n",area);

  //pib
   printf("PIB:%f \n",PIB);

  //pontos turisticos
  printf("Pontos turisticos:%d\n",pontot);

printf("\n vamos iniciar o próximo cadastro? não se preocupe só faremos este processo na primeira vez \n");
printf("\n Preencha as informações da sua segunda carta\n");

  char estado2 [30];
  char codigo2 [3];
  char cidade2 [30]; 
  int populacao2;
  float area2;
  float PIB2;
  int pontot2;
  // Área para entrada de dados

 //estado
 printf("Informe qual é o Estado:\n");
  scanf("%s",&estado2);

  // codigo da carta
  printf("Informe qual será o código: (ex: A01) \n");
  scanf("%s",&codigo2);

  //cidade
   printf("Informe qual é a cidade: \n");
  scanf("%s",&cidade2);

  // população
  printf("Informe qual é a população: \n");
  scanf("%d",&populacao2);

  //area
   printf("Informe qual é a Área de Km²: \n");
  scanf("%f",&area2);

  //pib
   printf("Informe qual é o PIB: \n");
  scanf("%f",&PIB2);

  //pontos turisticos
  printf("Informe qual o número de pontos turisticos: \n");
  scanf("%d",&pontot2);
  // Área para exibição dos dados da cidade

  //encerramento
printf("\n Muito Bem! Estes são os dados da carta que acabamos de registrar: \n");


  // codigo da carta
  printf("Código da carta:%s\n",codigo2);

   //estado
  printf("Estado:%s\n",estado2);

  //cidade
   printf("Cidade:%s\n",cidade2);

  // população
  printf("População:%d\n",populacao2);

  //area
   printf("Área de Km²:%f\n",area2);

  //pib
   printf("PIB:%f \n",PIB2);

  //pontos turisticos
  printf("Pontos turisticos:%d\n",pontot2);

printf("\n Obrigada pelo envio dos dados, as duas cartas foram cadastradas e em breve seguiremos para a próxima etapa! \n");

return 0;
} 
