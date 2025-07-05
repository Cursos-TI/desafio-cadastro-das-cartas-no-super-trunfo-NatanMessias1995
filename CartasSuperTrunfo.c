#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {


    char nomeestado1[20], nomeestado2[20]; 
    char codigoestado1[20], codigoestado2[20];
    char nomecidade1[20] , nomecidade2[20];
    float populacao1 , populacao2;
    float area1 , area2;
    float pib1,pib2;
    int pontostur1 , pontostur2;

    printf("Nome do Estado : \n");
    scanf("%s", nomeestado1);

    printf("Codigo da Cidade : \n");
    Scanf("%s",nomecidade1);
    
    printf("Populaçao cidade : \n");
    scanf("%f", populacao1);
    
    printf("Área total : \n");
    scanf ("%f", area1);
    
    printf("PIB da cidade : \n");
    scanf("%f", pib1);

    printf(" Quantidade de Pontos Turisticos : \n");
    scanf("%d", pontostur1);

    








    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
