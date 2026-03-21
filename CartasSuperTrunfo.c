#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Novato: primeira etapa você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

//Aventureiro: Segunda etapa da Atividade, nivel aventureiro, o objetivo é calcular a densidade populacional, o PIB per capte apresentar as informações complementares na descição final das cartas

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  //a orientação inicial sera de criar 2 cartas e ainda não aprendi a duplicar os registros então vai ter que ser um por carta
  // carta 1
  char estado [30]; // NIVEL NOVATO
  char codigo [3];// NIVEL NOVATO
  char cidade [30]; // NIVEL NOVATO
  int populacao;// NIVEL NOVATO
  float area;// NIVEL NOVATO
  float PIB;// NIVEL NOVATO
  int pontot;// NIVEL NOVATO
  float densidadepopulacional;// NIVEL AVENTUREIRO * valor da população dividido pela area da cidade
  float PIBpercapita; // NIVEL AVENTUREIRO * valor do pib dividido pela população da cidade

  // Área para entrada de dados

  //introdução
 printf("Olá, para iniciar o jogo precisamos realizar o cadastro das cartas de cada cidade, vamos lá?\n");

 //estado
 printf("Informe qual é o Estado (ex. A,B,C..):\n"); // A
  scanf("%s",&estado);

  // codigo da carta
  printf("Informe qual será o código: (ex: A01) \n"); //A01
  scanf("%s",&codigo);

  //cidade
   printf("Informe qual é a cidade: \n"); // BH
  scanf("%s",&cidade);

  // população
  printf("Informe qual é a população: \n"); //2.315.560
  scanf("%d",&populacao);

  //area
   printf("Informe qual é a Área de Km²: \n"); //331,354
  scanf("%f",&area);

  //pib
   printf("Informe qual é o PIB: \n"); //105.4 BI
  scanf("%f",&PIB);

  //pontos turisticos
  printf("Informe qual o número de pontos turisticos: \n"); // 150
  scanf("%d",&pontot);

  densidadepopulacional =populacao/area;
  PIBpercapita = PIB/populacao;
  // Área para exibição dos dados da cidade

  //encerramento
printf("\n Muito Bem! Estes são os dados da carta que acabamos de registrar: \n");

   //estado
  printf("Estado:%s\n",estado); 

  // codigo da carta
  printf("Código da carta:%s\n",codigo);

  //cidade
   printf("Cidade:%s\n",cidade);

  // população
  printf("População:%d \n",populacao);

  //area
   printf("Área de Km²:%.0f km² \n",area);

  //pib
   printf("PIB:%.0f bilhões de reais \n",PIB);

     //pontos turisticos
  printf("Número de Pontos turisticos:%d\n",pontot); 

  //densiddade populacional
   printf("Densidade Populacional:%f hab/km² \n",densidadepopulacional);
 
   //pibpercapita
   printf("PIB per capita:%f reais \n",PIBpercapita);



printf("\n vamos iniciar o próximo cadastro? não se preocupe só faremos este processo na primeira vez \n");
printf("\n Preencha as informações da sua segunda carta\n");

  char estado2 [30]; // NIVEL NOVATO
  char codigo2 [3]; // NIVEL NOVATO
  char cidade2 [30]; // NIVEL NOVATO
  int populacao2; // NIVEL NOVATO
  float area2; // NIVEL NOVATO
  float PIB2; // NIVEL NOVATO
  int pontot2; // NIVEL NOVATO
  float densidadepopulacional2;// NIVEL AVENTUREIRO * valor da população dividido pela area da cidade
  float PIBpercapita2; // NIVEL AVENTUREIRO * valor do pib dividido pela população da cidade
  // Área para entrada de dados

 //estado
 printf("Informe qual é o Estado (ex. A,B,C..):\n"); //A
  scanf("%s",&estado2);

  // codigo da carta
  printf("Informe qual será o código: (ex: A01) \n"); //A02
  scanf("%s",&codigo2);

  //cidade
   printf("Informe qual é a cidade: \n"); // Contagem
  scanf("%s",&cidade2);

  // população
  printf("Informe qual é a população: \n"); //621.863
  scanf("%d",&populacao2);

  //area
   printf("Informe qual é a Área de Km²: \n"); // 194,732
  scanf("%f",&area2);

  //pib
   printf("Informe qual é o PIB: \n"); //36.4 Bi
  scanf("%f",&PIB2);

  //pontos turisticos
  printf("Informe qual o número de pontos turisticos: \n"); // 50
  scanf("%d",&pontot2);

  densidadepopulacional2 =populacao2/area2;
  PIBpercapita2 = populacao2/PIB2;
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
   printf("Área de Km²:%f km²\n",area2);

  //pib
   printf("PIB:%f  bilhões de reais \n",PIB2);

  //pontos turisticos
  printf("Número de Pontos turisticos:%d\n",pontot2);

  //densiddade populacional
   printf("Densidade Populacional:%.2f hab/km² \n",densidadepopulacional2);
 
   //pibpercapita
   printf("PIB per capita:%.2f reais \n",PIBpercapita2);

printf("\n Obrigada pelo envio dos dados, as duas cartas foram cadastradas e em breve seguiremos para a próxima etapa! \n");


return 0;
} 

