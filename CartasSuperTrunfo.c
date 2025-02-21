#include <stdio.h>


int main(){
    
    char pais1[20], estado1[20], cidade1[30], dados1[20], codigo_da_cidade1[20];
    int populacao1, ponto_turisticos1;
    float area1, PIB1, densidade_populacinal1, pib_per_capita1;

    printf("Bem vindo ao Jogo de cartas super trunfo\n");

   //entrada de dados 
   //digita o nome de um pais

    
    printf("carta 1\n");
    printf("Digite um pais: ");
    scanf("%s", &pais1);

   //entra com o valor para estado 
    printf("Digite um estado: ");
    scanf("%s", &estado1);

    //etra com um valor para cidade
    printf("Digite uma cidade: ");
    scanf("%s", &cidade1);

    //entrar com o codigo da carta
    printf("Digite o codigo da cidade(A a H)estado e (01 a 04)cidade: ");
    scanf("%s", codigo_da_cidade1);

    //entra a população da cidade
    printf("Quantas pessoal tem na cidade: ");
    scanf("%d", &populacao1 );

    //entra a Área da cidade
    printf("Quanto e a Àrea da cidade em km²: ");
    scanf("%f", &area1);

    //entra a soma de todos os bens e serviços finais produzidos em um determinado período
    printf("Quanto e o PIB: ");
    scanf("%f", &PIB1);

    //entra a quantidade de postos turisticos
    printf("quantos pontos turisticos ela tem: ");
    scanf("%d", &ponto_turisticos1);

    //DENSIDADE POPULACIONAL( população / Area )
    densidade_populacinal1 = (float) populacao1 / area1;

    //PIB PER CAPITAL(PIB total / pupulação)
    pib_per_capita1 = (float)PIB1 / populacao1;

    //imprime na tela os valores
    printf("--------------------------------------------------------------\n\n");
    printf("carta2: \nestado: %s\n Codigo da carta: %s\n Nome da cidade: %s\n População: %d\n ", estado1, codigo_da_cidade1, cidade1, populacao1);
    printf("Área em km²: %.2f\n PIB: %.2f\n Número de pontos turísticos: %d\n", area1 , PIB1, ponto_turisticos1 );
    printf("A densidade populacional é: %f\n PIB per capita: %f\n\n", densidade_populacinal1, pib_per_capita1);

    // carta 2

    char pais2[20], estado2[20], cidade2[30], dados2[20], codigo_da_cidade2[20];
    int populacao2, ponto_turisticos2;
    float area2, PIB2,densidade_populacinal2, pib_per_capita2;

   //entrada de dados 
   //digita o nome de um pais

    printf("carta 2\n");
    printf("Digite um pais: ");
    scanf("%s", &pais2);

   //entra com o valor para estado 
    printf("Digite um estado(A a H)estado e (01 a 04)cidade: ");
    scanf("%s", &estado2);

    //etra com um valor para cidade
    printf("Digite uma cidade: ");
    scanf("%s", &cidade2);

    //entrar com o codigo da carta
    printf("Digite o codigo da cidade: ");
    scanf("%s", codigo_da_cidade2);

    //entra a população da cidade
    printf("Quantas pessoal tem na cidade: ");
    scanf("%d", &populacao2 );

    //entra a Área da cidade
    printf("Quanto e a Àrea da cidade em km²: ");
    scanf("%f", &area2);

    //entra a soma de todos os bens e serviços finais produzidos em um determinado período
    printf("Quanto e o PIB: ");
    scanf("%f", &PIB2);

    //entra a quantidade de postos turisticos
    printf("quantos pontos turisticos ela tem: ");
    scanf("%d", &ponto_turisticos2);


    //DENSIDADE POPULACIONAL( população / Area )
    densidade_populacinal2 = (float) populacao2 / area2;

    //PIB PER CAPITAL(PIB total / pupulação)
    pib_per_capita2 = (float) PIB2 / populacao2; 

    //imprime na tela os valores
    printf("--------------------------------------------------------------\n\n");
    printf("Carta2: \nestado: %s\n Codigo da carta: %s\n Nome da cidade: %s\n População: %d\n ", estado2, codigo_da_cidade2, cidade2, populacao2);
    printf("Área em km²: %.2f\n PIB: %.2f\n Número de pontos turísticos: %d\n", area2 , PIB2, ponto_turisticos2 );
    printf("A densidade populacional é: %f\n PIB per capita: %f\n", densidade_populacinal2, pib_per_capita2);

    return 0;
    
    

}
