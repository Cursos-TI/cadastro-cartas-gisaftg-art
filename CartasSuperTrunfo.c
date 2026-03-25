#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Novato: primeira etapa você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

//Aventureiro: Segunda etapa da Atividade, nivel aventureiro, o objetivo é calcular a densidade populacional, o PIB per capte apresentar as informações complementares na descição final das cartas

//Mestre  - terceira e ultima etapa da atividade do tema 2, o objetivo é:
          // calcular o superpoder somando todos os atributos numéricos (população, área, PIB, número de pontos turísticos, PIB per capita e o inverso da densidade populacional – quanto menor a densidade, maior o "poder")
          // Compare as duas cartas atributo por atributo (exceto estado, código e nome), incluindo o Super Poder. Lembre-se: para a densidade populacional, a carta com o menor valor vence; para os demais atributos (incluindo Super Poder), a carta com o maior valor vence.
          // Exibir os Resultados das Comparações: Para cada atributo, imprima na tela qual carta venceu (Carta 1 ou Carta 2), exibindo o resultado da comparação (1 para verdadeiro – Carta 1 vence – e 0 para falso – Carta 2 vence).

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
  float superpoder; // NIVEL MESTRE * soma de todos os atributos numéricos (população, área, PIB, número de pontos turísticos, PIB per capita e o inverso da densidade populacional – quanto menor a densidade, maior o "poder")
 
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

  superpoder = populacao + area + PIB + pontot + PIBpercapita + (1/densidadepopulacional);
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
  float superpoder2;//NIVELMESTRE 

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
  superpoder = populacao2 + area2 + PIB2 + pontot2 + PIBpercapita2 + (1/densidadepopulacional2);
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
   printf("Área de Km²:%.0f km²\n",area2);

  //pib
   printf("PIB:%.0f bilhões de reais \n",PIB2);

  //pontos turisticos
  printf("Número de Pontos turisticos:%d\n",pontot2);

  //densiddade populacional
   printf("Densidade Populacional:%.2f hab/km² \n",densidadepopulacional2);
 
   //pibpercapita
   printf("PIB per capita:%.2f reais \n",PIBpercapita2);

printf("\n Obrigada pelo envio dos dados, as duas cartas foram cadastradas! \n");

// NIVEL MESTRE - COMPARAÇÃO DE TODOS OS ATRIBUTOS SE A CARTA 1 É MAIOR QUE A CARTA 2

unsigned long int resultadopopulaçao;
float resultadoarea;
float resultadopib;
int resultadopontot;
float resultadodensidade;
float resultadopibpercapta;
float resultadosuperpoder;

resultadopopulaçao = populacao > populacao2;
resultadoarea = area > area2;
resultadopib = PIB > PIB2;
resultadopontot = pontot > pontot2;
resultadodensidade = (1/densidadepopulacional) > (1/densidadepopulacional2);
resultadopibpercapta = PIBpercapita > PIBpercapita2;
resultadosuperpoder = superpoder > superpoder2;

//testeresposta
//char 1 = "Sim";
//char 0 = "Não";
// resultado das comparações

printf("Agora,estamos na reta final do jogo, vamos ver quem vence o Super Trunfo!\n");

// codigo da carta
  printf("Lembrando que o resultado 1 é verdadeiro e 0 é falso:\n");

  // população
  printf("A População da carta 1 venceu? Comparamos %d x %d = %lu \n",populacao,populacao2,resultadopopulaçao);
 
  //area
   printf("A Área de Km² da carta 1 venceu? Comparamos %.0f x %.0f = %.0f \n",area,area2,resultadoarea);

  //pib
   printf(" O PIB da carta 1 venceu? Comparamos %.0f x %.0f = %.0f \n",PIB,PIB2,resultadopib);

  //pontos turisticos
  printf("Número de Pontos turisticos da carta 1 venceu? Comparamos %d x %d = %d \n",pontot,pontot2,resultadopontot);

  //densiddade populacional
   printf("A Densidade Populacional da carta 2 venceu? Comparamos %.0f x %.0f = %.0f \n",densidadepopulacional,densidadepopulacional2,resultadodensidade);
 
   //pibpercapita
   printf("O PIB per capita da carta 1 venceu? Comparamos %.0f x %.0f = %.0f \n",PIBpercapita,PIBpercapita2,resultadopibpercapta);

    //superpoder
   printf("O Super Poder da carta 1 venceu? Comparamos %.0f x %.0f = %.0f \n",superpoder,superpoder2,resultadosuperpoder);

return 0;
} 

