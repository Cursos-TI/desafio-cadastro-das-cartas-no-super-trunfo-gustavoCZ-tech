#include <stdio.h>


int main(){
    
    char pais[20], estado[20], cidade[30], dados[20], codigo_da_cidade[20];

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
    printf("Digite o codigo da cidade: ");
    scanf("%s", codigo_da_cidade);

    //entra com as informações de(cidade) -> população, área, pib, nimero de pontos turistico

    //pop(populção), tur(pontos turistico), 
    int populacao, ponto_turisticos;
    float area, PIB;

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
    printf("estado: %s\n Codigo da carta: %s\n Nome da cidade: %s\n População: %d\n ", estado, codigo_da_cidade, cidade, populacao);
    printf("Área em km²: %.2f\n PIB: %.2f\n Número de pontos turísticos: %d\n\n\n\n", area , PIB, ponto_turisticos );

    return 0;
    
    

}
