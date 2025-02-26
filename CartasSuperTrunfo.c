#include <stdio.h>


int main(){
    
    char pais1[20], estado1[20], cidade1[30], dados1[20], codigo_da_cidade1[20];
    int ponto_turisticos1;
    float area1, PIB1;
    unsigned long int populacao1;
    float super_poder1 =  populacao1 + ponto_turisticos1 + area1 + PIB1 ; 

    printf("Bem vindo ao Jogo de cartas super trunfo\n");

   //entrada de dados 
   //digita o nome de um pais

    printf("carta 1\n");
    printf("Digite um pais: ");
    scanf("%s", pais1);

   //entra com o valor para estado 
    printf("Digite um estado: ");
    scanf("%s", estado1);

    //etra com um valor para cidade
    printf("Digite uma cidade: ");
    scanf("%s", cidade1);

    //entrar com o codigo da carta
    printf("Digite o codigo da cidade(A a H)estado e (01 a 04)cidade: ");
    scanf("%s", &codigo_da_cidade1);

    //entra a população da cidade
    printf("Quantas pessoal tem na cidade: ");
    scanf("%lu", &populacao1 );

    //entra a Área da cidade
    printf("Quanto e a Àrea da cidade em km²: ");
    scanf("%f", &area1);

    //entra a soma de todos os bens e serviços finais produzidos em um determinado período
    printf("Quanto e o PIB: ");
    scanf("%f", &PIB1);

    //entra a quantidade de postos turisticos
    printf("quantos pontos turisticos ela tem: ");
    scanf("%d", &ponto_turisticos1);

    //Densisade populacional (população dividida pela área da cidade)
    float densidade_populacional1 = (float)populacao1 / area1;

    // pib per capita( pib total dividido pela populaçao)
    float pib_per_capita1 = (float) PIB1 / populacao1;

    // carta 2

    char pais2[20], estado2[20], cidade2[30], dados2[20], codigo_da_cidade2[20];
    int ponto_turisticos2;
    float area2, PIB2; 
    unsigned long int populacao2;
    float super_poder2 = (float) populacao2 + ponto_turisticos2 + area2 + PIB2 ; 

   //entrada de dados 
   //digita o nome de um pais
    printf("----------------------------------------\n");
    
    printf("carta 2\n");
    printf("Digite um pais: ");
    scanf("%s", pais2);

   //entra com o valor para estado 
    printf("Digite um estado(A a H)estado e (01 a 04)cidade: ");
    scanf("%s", estado2);
-
    //etra com um valor para cidade
    printf("Digite uma cidade: ");
    scanf("%s", cidade2);

    //entrar com o codigo da carta
    printf("Digite o codigo da cidade: ");
    scanf("%s", codigo_da_cidade2);

    //entra a população da cidade
    printf("Quantas pessoal tem na cidade: ");
    scanf("%lu", &populacao2 );

    //entra a Área da cidade
    printf("Quanto e a Àrea da cidade em km²: ");
    scanf("%f", &area2);

    //entra a soma de todos os bens e serviços finais produzidos em um determinado período
    printf("Quanto e o PIB: ");
    scanf("%f", &PIB2);

    //entra a quantidade de postos turisticos
    printf("quantos pontos turisticos ela tem: ");
    scanf("%d", &ponto_turisticos2);

    //Densisade populacional (população dividida pela área da cidade)
    float densidade_populacional2 = (float)populacao2 / area2;

    // pib per capita( pib total dividido pela populaçao)
    float pib_per_capita2 = (float) PIB2 / populacao2;

    //Dados da carta 1
    printf("--------------------------------------------------------------\n\n");
    printf("dados da carta 1\n");
    printf("carta 1: \nestado: %s\n Codigo da carta: %s\n Nome da cidade: %s\n População: % lu\n  ", estado1, codigo_da_cidade1, cidade1, populacao1);
    printf("Área em km²: %.2f\n PIB: %.2f\n Número de pontos turísticos: %d\n", area1 , PIB1, ponto_turisticos1 );
    printf("PIB per capita: %.2f\n densidade populacional: %.2f\n super poder é %.2f \n",pib_per_capita1, densidade_populacional1, super_poder1);

    //Dados da carta 
    printf("--------------------------------------------------------------\n\n");
    printf("Dados da carta 2 \n");
    printf("Carta 2: \nestado: %s\n Codigo da carta: %s\n Nome da cidade: %s\n População: %lu\n ", estado2, codigo_da_cidade2, cidade2, populacao2);
    printf("Área em km²: %.2f\n PIB: %.2f\n Número de pontos turísticos: %d\n", area2 , PIB2, ponto_turisticos2 );
    printf("PIB per capita: %.2f\n densidade populacional: %.2f\n super poder é %.2f \n",pib_per_capita2, densidade_populacional2, super_poder2);


    //comparação
    
    printf("--------------------------------------------------------\n");
    printf("vamos compara as cartas 1 significa que a afirmação e verdadeira e 0 que e falssa\n");

    unsigned long int comparacao_populacao = populacao1 > populacao2;
    int comparacao_area =(int)area1 > area2;
    float comparacao_pib = (int)PIB1 > PIB2;
    float comparacao_densidade_populacional = (int)densidade_populacional1 < densidade_populacional2, comparacao_pib_per_capita = pib_per_capita1 > pib_per_capita2;
    long int comparacao_super_poder = super_poder1 > super_poder2;
    short comparacao_ponto_turistico =  ponto_turisticos1 > ponto_turisticos2;

    //  População: Carta 1 venceu (1)
    printf("População: Carta 1  venceu (%lu) \n", comparacao_populacao);

    // Área: Carta 1 venceu (1)
    printf("Área: Carta 1 venceu (%d)\n", comparacao_area);
    // PIB: Carta 1 venceu (1)
    printf(" PIB: Carta 1 venceu (%d)\n", comparacao_pib);
    // Pontos Turísticos: Carta 1 venceu (1)
    printf(" Pontos Turísticos: Carta 1 venceu (%lu)\n", comparacao_ponto_turistico);
    // Densidade Populacional: Carta 2 venceu (0)
    printf(" Densidade Populacional: Carta 2 venceu (%l-d)\n", comparacao_densidade_populacional);
    // PIB per Capita: Carta 1 venceu (1)
    printf("  PIB per Capita: Carta 1 venceu (%ld)\n", comparacao_pib_per_capita);
    // Super Poder: Carta 1 venceu (1)
    printf(" Super Poder: Carta 1 venceu (%ld)\n", comparacao_super_poder);

    return 0;
} 
    