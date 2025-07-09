#include <stdio.h>



int main() {

    //// Variaveis ////

    char nomeestado1[50], nomeestado2[50];  
    char codigoestado1[50], codigoestado2[50];
    char nomecidade1[50] , nomecidade2[50];
    float populacao1 , populacao2 , densidadepop1 , densidadepop2;
    float area1 , area2, pibpercapita1 , pibpercapita2;
    float pib1,pib2;
    int pontostur1 , pontostur2 , codigocidade1, codigocidade2 ;

    /// DADOS DA CARTA 01 ///

    printf("Sigla do Estado : \n"); /// printa na tela o texto entre "" ///
    scanf("%s", nomeestado1);      /// printa na tela a variavel inserida ///

    printf("Codigo da Cidade : \n");
    scanf("%d", &codigocidade1);

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

    printf(" *** CARTA 01 *** : \n");

    /*printf("Densidade populacional : \n");
    

    printf("PIB per capita : \n");*/
    

    
    /// DADOS DA CARTA 01 ///
   
    printf(" - Estado : %s\n - Codigo : %d\n - Cidade : %s\n - População : %.8f\n - Área em metros : %.2f\n - PIB : %.2f\n - Pontos Turísticos : %d\n - Densidade populacional : %f\n - PIB percapita : %f\n ", nomeestado1,
        codigocidade1 , nomecidade1 ,  populacao1 , area1 , pib1, pontostur1 , densidadepop1 = populacao1/area1 , pibpercapita1 = pib1/populacao1 );

    

         /// DADOS DA CARTA 02 ///
   
    printf("Sigla do Estado : \n"); /// printa na tela o texto entre "" ///
    scanf("%s", nomeestado2);      /// printa na tela a variavel inserida ///

    printf("Codigo da Cidade : \n");
    scanf("%d", &codigocidade2);

    printf("Nome da Cidade : \n");
    scanf("%s", nomecidade2);
    
    printf("Populaçao cidade : \n");
    scanf("%f", &populacao2);
    
    printf("Área total : \n");
    scanf ("%f", &area2);
    
    printf("PIB da cidade : \n");
    scanf("%f", &pib2);

    printf("Quantidade de Pontos Turisticos : \n");
    scanf("%d", &pontostur2);

    printf(" *** CARTA 02 *** : \n");

    /*printf("Densidade populacional : \n");
    

    printf("PIB per capita : \n");*/
    

    
    /// DADOS DA CARTA 02 ///
       
    printf(" - Estado : %s\n - Codigo : %d\n - Cidade : %s\n - População : %.8f\n - Área em metros : %.2f\n - PIB : %.2f\n - Pontos Turísticos : %d\n - Densidade populacional : %f\n - PIB percapita : %f\n ", nomeestado2,
        codigocidade2 , nomecidade2 ,  populacao2 , area2 , pib2, pontostur2 , densidadepop2 = populacao2/area2 , pibpercapita2 = pib2/populacao2 );

    

    return 0;
}