#include <stdio.h>
#include<stdbool.h>

int main()
{
  int escolhajogador1, escolhajogador2;
  bool opcao1_escolhida = false, opcao2_escolhida = false, opcao3_escolhida = false, opcao4_escolhida = false;
  bool opcao5_escolhida = false,opcao6_escolhida = false, opcao7_escolhida = false;

  char pais1[20] = "brasil", estado1[20] = "permanbuco";
  char cidade1[30] = "paulista", codigo_da_cidade1[5] = "A01";
  int ponto_turisticos1 = 5;
  long double area1 = 5000, PIB1 = 10000;
  unsigned long int populacao1 = 600;

  char pais2[20] = "brasil", estado2[20] = "permanbuco";
  char cidade2[30] = "recife", codigo_da_cidade2[5] = "A02";
  int ponto_turisticos2 = 10;
  long double area2 = 8800, PIB2 = 250000;
  unsigned long int populacao2 = 350000;

  
  // calculo de dados
  
  long double densidadedemografica1 = populacao1 /( long double) area1;
  long double pib_per_capita1 = (long double)PIB1 / populacao1;
  long double super_poder1 =(long double) populacao1 + ponto_turisticos1 + area1 + PIB1;
  
  long double densidadedemografica2 = populacao2 /(long double) area2;
  float pib_per_capita2 = (long double)PIB2 / populacao2;
  long double super_poder2 = (long double)populacao2 + ponto_turisticos2 + area2 + PIB2;
  
  // menu de comparação
  

  printf("Bem vindo ao Jogo de cartas super trunfo\n");
  printf("--------------------------------------------------------\n");
  printf("menu de atributos para comparar\n");
  printf("1. ponto turisticco.\n");
  printf("2. Área.\n");
  printf("3. PIB.\n");
  printf("4. população.\n");
  printf("5. densidade demografica\n");
  printf("6. PIB per capita.\n");
  printf("7. Super poder.\n");
  printf("escolha um tributo para comparar: ");
  scanf("%d", &escolhajogador1);
  
  
  
  switch (escolhajogador1)
  {
    case 1:
    if(ponto_turisticos1)
    {
      printf("voçê escolheu o ponto turistico.\n");
      opcao1_escolhida = true;
    }
    break;
    case 2:
    if (area1)
    {
      printf("voçê escolheu a Área.\n");
      opcao2_escolhida = true;
    }
    break;
    case 3:
    if (PIB1)
    {
      printf("voçê escolheu o PIB.\n");
      opcao3_escolhida = true;
    }
    break;
    case 4:
    if (populacao1)
    {
      printf("voçê escolheu a  população.\n");
      opcao4_escolhida = true;
    }
    break;
    case 5:
    if (densidadedemografica1)
    {
      printf("voçê escolheu Densidade demografica.\n");
      opcao5_escolhida = true;
    }
    break;
    case 6:
    if (pib_per_capita1)
    {
      printf("voçê escolheu o PIB per capita.\n");
      opcao6_escolhida = true;
    }
    break;
    case 7:
    if (super_poder1)
    {
      printf("voçê escolheu super poder.\n");
      opcao7_escolhida = true;
    }
    break;
    default:
      printf("opção invalida");
      return 0;
    break;
  }

  printf("--------------------------------------------------------\n");
  printf("menu de atributos para comparar\n");
  (!opcao1_escolhida) ? printf("1. ponto turistico.\n") : 0;
  (!opcao2_escolhida) ? printf("2. Área.\n") : 0;
  (!opcao3_escolhida) ? printf("3. PIB.\n") : 0;
  (!opcao4_escolhida) ? printf("4. populaçâo.\n") : 0;
  (!opcao5_escolhida) ? printf("5. densidade demografica\n") : 0;
  (!opcao6_escolhida) ? printf("6. PIB per capita\n") : 0;
  (!opcao7_escolhida) ? printf("7. Super poder\n") : 0;
  printf("escolha um tributo para comparar: ");
  scanf("%d", &escolhajogador2);

  switch (escolhajogador2)
  {
    case 1:
    if(opcao1_escolhida)
    {
      printf("opção ja foi escolhida.\n");
      return 1;
    }
      printf("voçê escolheu ponto turistico\n");
    break;
    case 2:
    if (opcao2_escolhida)
    {
      printf("opção ja foi escolhida.\n");
      return 1;
    }
      printf("voçê escolheu a Área.\n");
      opcao2_escolhida = true;
    break;
    case 3:
    if (opcao3_escolhida)
    {
      printf("opção ja foi escolhida.\n");
      return 1;
    }
      printf("voçê escolheu o PIB.\n");
      opcao3_escolhida = true;
    break;
    case 4:
    if (opcao4_escolhida)
    {
      printf("opção ja foi escolhida.\n");
      return 1;
    }
      printf("voçê escolheu a  população.\n");
      opcao4_escolhida = true;
    break;
    case 5:
    if (opcao5_escolhida)
    {
      printf("opção ja foi escolhida.\n");
      return 1;
    }
      printf("voçê escolheu Densidade demografica.\n");
      opcao5_escolhida = true;
    break;
    case 6:
    if (opcao6_escolhida)
    {
      printf("opção ja foi escolhida.\n");
      return 1;
    }
      printf("voçê escolheu o PIB per capita.\n");
      opcao6_escolhida = true;
    break;
    case 7:
    if (opcao7_escolhida)
    {
      printf("opção ja foi escolhida.\n");
      return 1;
    }
      printf("voçê escolheu super poder.\n");
      opcao7_escolhida = true;
    break;
    default:
      printf("opção invalida");
    break;
  }
  if (densidadedemografica1 < escolhajogador2){
       printf("carta 1 venceu");
  }else if(densidadedemografica2 < escolhajogador1){
    printf("carta 2 vence");
  }else if(escolhajogador1 > escolhajogador2){
    printf("carta 1 venceu");
  }else{
    printf("carta 2 venceu");
  }

  // soma de todoa os valores

  long double soma_carta1 = (long double) ponto_turisticos1 + area1 + PIB1 + populacao1 + densidadedemografica1 + pib_per_capita1 + super_poder1;
  long double soma_carta2 = (long double) ponto_turisticos2 + area2 + PIB2 + populacao2 + densidadedemografica2 + pib_per_capita2 + super_poder2;

  printf("%Lf",soma_carta1);
  printf("%Lf",soma_carta1);

return 0;
}