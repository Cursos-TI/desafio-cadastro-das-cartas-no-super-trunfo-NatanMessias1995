#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {


    char nomeestado1[50], nomeestado2[50]; 
    char codigoestado1[50], codigoestado2[50];
    char nomecidade1[50] , nomecidade2[50];
    float populacao1 , populacao2;
    float area1 , area2;
    float pib1,pib2;
    int pontostur1 , pontostur2;

    printf("Sigla do Estado : \n");
    scanf("%s", nomeestado1);

    printf("Nome da Cidade : \n");
    scanf("%s", nomecidade1);
    
    printf("Populaçao cidade : \n");
    scanf("%f", &populacao1);
    
    printf("Área total : \n");
    scanf ("%f", &area1);
    
    printf("PIB da cidade : \n");
    scanf("%f", &pib1);

    printf("Quantidade de Pontos Turisticos : \n");
    scanf("%d", &pontostur1);

    
    /// DADOS DA CARTA 01 ///

    printf("Estado : %s\n - Cidade : %s\n - População : %f\n - Área em metros : %f\n - PIB : %f\n - Pontos Turísticos : %d\n ", nomeestado1,
        nomecidade1, populacao1 , area1 , pib1, pontostur1 );







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
