#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main(){
    
    char pais[20];
    char estadoA[30], estadoB[30], estadoC[30], estadoD[30], estadoE[30], estadoF[30], estadoG[30], estadoH[30];
    char cidade1[30],cidade2[30],cidade3[30],cidade4[30];
    char dados1[20];

    printf("Bem vindo ao Jogo de cartoas super trunfo\n");

   //entrada de dados 
   //digita o nome de um pais

    printf("Digite um pais: ");
    scanf("%s", &pais);

   //entra com o valor para estado 
    printf("Digite um estado: ");
    scanf("%s", &estadoA);

    //etra com um valor para cidade
    printf("Digite uma cidade: ");
    scanf("%s", &cidade1);

    //entra com as informações de(cidade) -> população, área, pib, nimero de pontos turistico

    //pop(populção), tur(pontos turistico), 
    int pop, tur;
    float area, PIB;

    printf("Quantas pessoal tem na cidade: ");
    scanf("%d", &pop );

    printf("Quanto e a Àrea da cidade: ");
    scanf("%.2f", &area);

    printf("Quanto e o PIB: ");
    scanf("%f", &PIB);

    printf("quantos pontos turisticos ela tem: ");
    scanf("%d", &tur);

    return 0;

    // nostra os valore em uma mesma linha da carta cidade
    //
    
    
    
    
    
    
    
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

   
}
