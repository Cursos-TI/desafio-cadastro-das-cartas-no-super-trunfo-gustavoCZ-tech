#include <stdio.h>


int main(){
    
    char pais[20], estado[20], cidade[30], dados[20], codigo_da_cidade[20];
    int populacao, ponto_turisticos;
    float area, PIB;

    printf("Bem vindo ao Jogo de cartas super trunfo\n");

   //entrada de dados 
   //digita o nome de um pais

    printf("Digite um pais: ");
    scanf("%s", &pais);

   //entra com o valor para estado 
    printf("Digite um estado: ");
    scanf("%s", &estado);

    //etra com um valor para cidade
    printf("Digite uma cidade: ");
    scanf("%s", &cidade);

    //entrar com o codigo da carta
    printf("Digite o codigo da cidade(A a H)estado e (01 a 04)cidade: ");
    scanf("%s", codigo_da_cidade);

    //entra a população da cidade
    printf("Quantas pessoal tem na cidade: ");
    scanf("%d", &populacao );

    //entra a Área da cidade
    printf("Quanto e a Àrea da cidade em km²: ");
    scanf("%f", &area);

    //entra a soma de todos os bens e serviços finais produzidos em um determinado período
    printf("Quanto e o PIB: ");
    scanf("%f", &PIB);

    //entra a quantidade de postos turisticos
    printf("quantos pontos turisticos ela tem: ");
    scanf("%d", &ponto_turisticos);

    //imprime na tela os valores
    printf("--------------------------------------------------------------\n\n");
    printf("carta2: \nestado: %s\n Codigo da carta: %s\n Nome da cidade: %s\n População: %d\n ", estado, codigo_da_cidade, cidade, populacao);
    printf("Área em km²: %.2f\n PIB: %.2f\n Número de pontos turísticos: %d\n", area , PIB, ponto_turisticos );


    // carta 2

    char pais2[20], estado2[20], cidade2[30], dados2[20], codigo_da_cidade2[20];
    int populacao2, ponto_turisticos2;
    float area2, PIB2;

    printf("Bem vindo ao Jogo de cartas super trunfo\n");

   //entrada de dados 
   //digita o nome de um pais

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

    //imprime na tela os valores
    printf("--------------------------------------------------------------\n\n");
    printf("Carta2: \nestado: %s\n Codigo da carta: %s\n Nome da cidade: %s\n População: %d\n ", estado2, codigo_da_cidade2, cidade2, populacao2);
    printf("Área em km²: %.2f\n PIB: %.2f\n Número de pontos turísticos: %d\n", area2 , PIB2, ponto_turisticos2 );

    return 0;
    
    

}
