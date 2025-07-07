#include <stdio.h>



int main() {

    //// Variaveis ////

    char nomeestado1[50], nomeestado2[50];  
    char codigoestado1[50], codigoestado2[50];
    char nomecidade1[50] , nomecidade2[50];
    float populacao1 , populacao2;
    float area1 , area2;
    float pib1,pib2;
    int pontostur1 , pontostur2;

    printf("Sigla do Estado : \n"); /// printa na tela o texto entre "" ///
    scanf("%s", nomeestado1);      /// printa na tela a variavel inserida ///

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

    
   

    return 0;
}
