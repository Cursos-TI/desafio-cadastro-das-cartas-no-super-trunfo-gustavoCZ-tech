#include <stdio.h>

int main()
{
  char pais1[20] = "brasil", estado1[20] = "permanbuco";
  char cidade1[30] = "paulista", codigo_da_cidade1[5] = "A01";
  int ponto_turisticos1 = 5;
  float area1 = 5000, PIB1 = 10000;
  unsigned long int populacao1 = 600;

  char pais2[20] = "brasil", estado2[20] = "permanbuco";
  char cidade2[30] = "recife", codigo_da_cidade2[5] = "A02";
  int ponto_turisticos2 = 10;
  float area2 = 8800, PIB2 = 250000;
  unsigned long int populacao2 = 350000;

  printf("Bem vindo ao Jogo de cartas super trunfo\n");

  // calculo de dados

  float densidade_populacional1 = (float)populacao1 / area1;
  float pib_per_capita1 = (float)PIB1 / populacao1;
  float super_poder1 = populacao1 + ponto_turisticos1 + area1 + PIB1;

  float densidade_populacional2 = (float)populacao2 / area2;
  float pib_per_capita2 = (float)PIB2 / populacao2;
  float super_poder2 = (float)populacao2 + ponto_turisticos2 + area2 + PIB2;

  // exobição das carta

  printf("--------------------------------------------------------------\n\n");
  printf("dados da carta 1\n");
  printf("carta 1: \nestado: %s\n Codigo da carta: %s\n Nome da cidade: %s\n População: % lu\n  ", estado1, codigo_da_cidade1, cidade1, populacao1);
  printf("Área em km²: %.2f\n PIB: %.2f\n Número de pontos turísticos: %d\n", area1, PIB1, ponto_turisticos1);
  printf("PIB per capita: %.2f\n densidade populacional: %.2f\n super poder é %.2f \n", pib_per_capita1, densidade_populacional1, super_poder1);

  printf("--------------------------------------------------------------\n\n");
  printf("Dados da carta 2 \n");
  printf("Carta 2: \nestado: %s\n Codigo da carta: %s\n Nome da cidade: %s\n População: %lu\n ", estado2, codigo_da_cidade2, cidade2, populacao2);
  printf("Área em km²: %.2f\n PIB: %.2f\n Número de pontos turísticos: %d\n", area2, PIB2, ponto_turisticos2);
  printf("PIB per capita: %.2f\n densidade populacional: %.2f\n super poder é %.2f \n", pib_per_capita2, densidade_populacional2, super_poder2);

  // menu de comparação

  int comparação;
  printf("--------------------------------------------------------\n");
  printf("menu de atributos para comparar\n");
  printf("1. população.\n");
  printf("2. Área.\n");
  printf("3. PIB.\n");
  printf("4. ponto turistico.\n");
  printf("5. densidade demografica\n");

  switch (comparação)
  {
  case 1:
    if (populacao1 == populacao2)
    {
      printf("Teve um empate !\n");
    }
    else if (populacao1 > populacao2)
    {
      printf("pais da carta 1  = %s\n  ||  pais da carta 2 = %s\n atributo usado para comparar: população", pais1, pais2);
      printf("população carta 1  = %lu\n  ||  população da carta 2 = %lu\n", populacao1, populacao2);
      printf("carta 1 venceu!");
    }
    else
    {
      printf("pais da carta 1  = %s\n  ||  pais da carta 2 = %s\n atributo usado para comparar: população\n", pais1, pais2);
      printf("população carta 1  = %lu\n  ||  população da carta 2 = %lu\n", populacao1, populacao2);
      printf("carta 2 venceu!");
    }
    break;
  case 2:
    if (area1 == area2)
    {
      printf("Teve um empate !\n");
    }
    else if (area1 > area2)
    {
      printf("pais da carta 1  = %s\n  ||  pais da carta 2 = %s\n atributo usado para comparar: Área", pais1, pais2);
      printf("A Área da carta 1  = %f\n  ||  A Área da carta 2 = %f\n", area1, area2);
      printf("carta 1 venceu!");
    }
    else
    {
      printf("pais da carta 1  = %s\n  ||  pais da carta 2 = %s\n atributo usado para comparar: população\n", pais1, pais2);
      printf("A Área da carta 1  = %f\n  ||  A Área da carta 2 = %f\n", area1, area2);
      printf("carta 2 venceu!");
    }
    break;
  case 3:
    if (PIB1 == PIB2)
    {
      printf("Teve um empate,\n");
    }
    else if (PIB1 > PIB2)
    {
      printf("pais da carta 1  = %s\n  ||  pais da carta 2 = %s\n atributo usado para comparar: população", pais1, pais2);
      printf("PIB da carta 1  = %lu\n  ||  PIB da carta 2 = %lu\n", PIB1, PIB2);
      printf("carta 1 venceu!");
    }
    else
    {
      printf("pais da carta 1  = %s\n  ||  pais da carta 2 = %s\n atributo usado para comparar: população\n", pais1, pais2);
      printf("PIB da carta 1  = %lu\n  ||  PIB da carta 2 = %lu\n", PIB1, PIB2);
      printf("carta 2 venceu!");
    }
    break;
  case 4:
    if (ponto_turisticos1 == ponto_turisticos2)
    {
      printf("Teve um empate !\n");
    }
    else if (ponto_turisticos1 > ponto_turisticos2)
    {
      printf("pais da carta 1  = %s\n  ||  pais da carta 2 = %s\n atributo usado para comparar: população", pais1, pais2);
      printf("pontos turisticos da carta 1  = %d\n  ||  pontos turisticos da carta 2 = %d\n", ponto_turisticos1, ponto_turisticos2);
      printf("carta 1 venceu!");
    }
    else
    {
      printf("pais da carta 1  = %s\n  ||  pais da carta 2 = %s\n atributo usado para comparar: população\n", pais1, pais2);
      printf("pontos turisticos da carta 1  = %d\n  ||  pontos turisticos da carta 2 = %d\n", ponto_turisticos1, ponto_turisticos2);
      printf("carta 2 venceu!");
    }
    break;
  case 5:
    if (densidade_populacional1 == densidade_populacional2)
    {
      printf("Teve um empate !\n");
    }
    else if (densidade_populacional1 < densidade_populacional2)
    {
      printf("pais da carta 1  = %s\n  ||  pais da carta 2 = %s\n atributo usado para comparar: população", pais1, pais2);
      printf("densidade populacinal da carta 1  = %f\n  ||  densidade populacional da carta 2 = %f\n", densidade_populacional1, densidade_populacional2);
      printf("carta 1 venceu!");
    }
    else
    {
      printf("pais da carta 1  = %s\n  ||  pais da carta 2 = %s\n atributo usado para comparar: população\n", pais1, pais2);
      printf("densidade populacional da carta 1  = %f\n  ||  densidade populacional da carta 2 = %f\n", populacao1, populacao2);
      printf("carta 2 venceu!");
    }
    break;
  default:
    printf("opção invalida");
    break;
  }
  return 0;
}