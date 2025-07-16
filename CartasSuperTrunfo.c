#include <stdio.h>



int main() {

    //// Variaveis ////

    char nomeestado1[50], nomeestado2[50];  
    char codigoestado1[50], codigoestado2[50];
    char nomecidade1[50] , nomecidade2[50];
    float populacao1 , populacao2 ;
    float densidadepop1 , densidadepop2;
    float area1 , area2, pibpercapita1 , pibpercapita2;
    float pib1,pib2;
    int pontostur1 , pontostur2 , codigocidade1, codigocidade2 ;
    float superpoder1 , superpoder2;

   
    

    
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

    superpoder1 = (populacao1 + area1 + pib1 + (float)pontostur1 - (populacao1/area1) );

    printf(" *** CARTA 01 *** : \n");

    
    

    
    /// DADOS DA CARTA 01 ///
   
    printf(" - Estado : %s\n - Codigo : %d\n - Cidade : %s\n - População : %.2f\n - Área em metros : %.2f\n - PIB : %.2f\n - Pontos Turísticos : %d\n - Densidade populacional : %f\n - PIB percapita : %f\n ", nomeestado1,
        codigocidade1 , nomecidade1 ,  populacao1 , area1 , pib1, pontostur1 , densidadepop1 = populacao1/area1 , pibpercapita1 = pib1/populacao1 );

    printf("Superpoder carta 1 : %.2f\n" , superpoder1);

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

    superpoder2 = (populacao2 + area2 + pib2 + (float)pontostur2 - (populacao2/area2) );

    printf(" *** CARTA 02 *** : \n");

        

    
    /// DADOS DA CARTA 02 ///
       
    printf(" - Estado : %s\n - Codigo : %d\n - Cidade : %s\n - População : %.2f\n - Área em metros : %.2f\n - PIB : %.2f\n - Pontos Turísticos : %d\n - Densidade populacional : %f\n - PIB percapita : %f\n ", nomeestado2,
        codigocidade2 , nomecidade2 ,  populacao2 , area2 , pib2, pontostur2 , densidadepop2 = populacao2/area2 , pibpercapita2 = pib2/populacao2 );


        printf("Superpoder carta 2 : %.2f\n" , superpoder2);

    /// COMPARAÇÃO DAS CARTAS ///

    int atributos1;
   
    printf("Escolha um atributo da sua carta para batalhar:\n");

    printf("1. População\n");
    printf("2. Área cidade\n");
    printf("3. Pib cidade\n");
    printf("4. Pontos turisticos\n");
    printf("5. Densidade demográfica\n");

    scanf("%d", &atributos1);

    switch (atributos1) {      /////// FAZ A COMPARAÇÃO ENTRE AS CARTAS DO CASO LISTADOS ////////
    case 1:
      printf("Brasil - %s\n", nomecidade1);  
      printf("População carta 1 : %.2f\n", populacao1);
      printf("Brasil - %s\n", nomecidade2);
      printf("População carta 2 : %.2f\n", populacao2);

      if (populacao1 == populacao2){
       printf("As cartas Empataram !");
      }

      else if (populacao1 > populacao2){      ////// FORMULA COMPARATIVA //////
       printf("Carta 1 ganhou !");       ///// RESPOSTA CASO CARTA 1 VENÇA //////
      }
      else {                            ///// SENÃO ///////
       printf("Carta 2 ganhou !");      //// CARTA 2 VENCE ////
      }
      break;

      case 2:
      printf("Brasil - %s\n", nomecidade1);
      printf("Área cidade 1 : %.2f\n", area1);
      printf("Brasil - %s\n", nomecidade2);
      printf("Área cidade 2 : %.2f\n", area2);

      if (area1 == area2){
       printf("As cartas Empataram !");
      }

      else if (area1 > area2){
       printf("Carta 1 ganhou !");
      }
      else {
       printf("Carta 2 ganhou !");
      }
      break;

       case 3:
      printf("Brasil - %s\n", nomecidade1);  
      printf("PIB carta 1 : %.2f\n", pib1);
      printf("Brasil - %s\n", nomecidade2);
      printf("PIB carta 2 : %.2f\n", pib2);

      if (pib1 == pib2){
       printf("As cartas Empataram !");
      }

      else if (pib1 > pib2){      ////// FORMULA COMPARATIVA //////
       printf("Carta 1 ganhou !");       ///// RESPOSTA CASO CARTA 1 VENÇA //////
      }
      else {                            ///// SENÃO ///////
       printf("Carta 2 ganhou !");      //// CARTA 2 VENCE ////
      }
      break;


       case 4:
      printf("Brasil - %s\n", nomecidade1);  
      printf("Pontos turisticos carta 1 : %.2f\n", pontostur1);
      printf("Brasil - %s\n", nomecidade2);
      printf("Pontos turisticos carta 2: %.2f\n", pontostur2);

      if (pontostur1 == pontostur2){
       printf("As cartas Empataram !");
      }

      else if (pontostur1 > pontostur2){      ////// FORMULA COMPARATIVA //////
       printf("Carta 1 ganhou !");       ///// RESPOSTA CASO CARTA 1 VENÇA //////
      }
      else {                            ///// SENÃO ///////
       printf("Carta 2 ganhou !");      //// CARTA 2 VENCE ////
      }
      break;


       case 5:
      printf("Brasil - %s\n", nomecidade1);  
      printf("Densidade Demográfica carta 1 : %.2f\n", densidadepop1);
      printf("Brasil - %s\n", nomecidade2);
      printf("Densidade Demográfica carta 2: %.2f\n", densidadepop2);

      if (densidadepop1 == densidadepop2){
       printf("As cartas Empataram !");
      }

      else if (densidadepop1 < densidadepop2){      ////// FORMULA COMPARATIVA - INVERSAO DE MAIOR PARA MENOR //////
       printf("Carta 1 ganhou !");       ///// RESPOSTA CASO CARTA 1 VENÇA //////
      }
      else {                            ///// SENÃO ///////
       printf("Carta 2 ganhou !");      //// CARTA 2 VENCE ////
      }
      break;

       default:
      printf("Opção inválida. Tente novamente.\n");  






    }
   

        return 0;
}