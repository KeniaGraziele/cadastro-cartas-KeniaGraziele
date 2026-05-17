#include<stdio.h>
#include<stdlib.h>

int main() {

    char estado[20];
    char codigo_da_carta[20];
    char nome_da_cidade[20];
    int populacao;
    float area_quadrada;
    float pib;
    int numero_pontos_turistico;
    float densidade_populacional;
    float pib_per_capita;
    
    char estado_2[20];
    char codigo_da_carta_2[20];
    char nome_da_cidade_2[20];
    int populacao_2;
    float area_quadrada_2;
    float pib_2;
    int numero_pontos_turistico_2;  
    float densidade_populacional_2;
    float pib_per_capita_2;

    
    /////////////////Primeira Carta ////////////////////////////

    printf("Carta 1: \n");

    printf("estado: \n ");
    scanf("%s" , estado);

    printf("codigo da carta: \n ");
    scanf("%s" , codigo_da_carta);

    printf("nome da cidade: \n");
    scanf("%s" , nome_da_cidade );

    printf("populacao: \n ");
    scanf("%d" , &populacao);

    printf("area quadrada: \n ");
    scanf("%f" ,&area_quadrada);

    printf("pib: \n");
    scanf("%f" , &pib);

    printf("pontos_turisticos: \n");
    scanf("%d" , &numero_pontos_turistico);

    densidade_populacional = populacao / area_quadrada;

    pib_per_capita = pib / populacao;


    ////////////// Segunda carta ///////////////////
    
    printf("Carta 2: \n");
 
    printf("estado: \n ");
    scanf("%s" , estado_2);

    printf("codigo da carta: \n ");
    scanf("%s" , codigo_da_carta_2);

    printf("nome da cidade: \n");
    scanf("%s" , nome_da_cidade_2 );

    printf("populacao: \n ");
    scanf("%d" , &populacao_2);

    printf("area quadrada: \n ");
    scanf("%f" ,&area_quadrada_2);

    printf("pib: \n");
    scanf("%f" , &pib_2);

    printf("pontos_turisticos: \n");
    scanf("%d" , &numero_pontos_turistico_2); 

    densidade_populacional_2 = populacao_2 / area_quadrada_2;

    pib_per_capita_2 = pib_2 / populacao_2;




    ///////////////////////Imprimir resultado///////////////////////////////////
    printf("\n##### Cartas Triunfo#####\n");
    printf("\n carta 1 \n ");
     
    printf("Estado: %s \n " , estado);

    printf("Codigo: %s \n " , codigo_da_carta);
    
    printf("Nome da Cidade: %s \n" , nome_da_cidade);

    printf("Populacao: %d \n ", populacao);

    printf("Area: %f km² \n " , area_quadrada);

    printf("PIB: %f reais \n ", pib);

    printf("Numero de Pontos Turisticos: %d \n ", numero_pontos_turistico);

    printf("Densidade Populacional: %f hab/km² \n ", densidade_populacional);

    printf("PIB per Capita: %f reais \n " , pib_per_capita);

    
    ///////////////////////////Imprimir resultado///////////////////////////
    printf("\n#####Cartas Triunfo#####\n");

    printf("\n carta 2 \n ");

    printf("Estado: %s \n ", estado_2);

    printf("Codigo %s: \n " , codigo_da_carta_2);

    printf("Nome da Cidade: %s \n " , nome_da_cidade_2);

    printf("Populacao: %d \n ", populacao_2);

    printf("Area: %f km² \n  ", area_quadrada_2);

    printf("PIB: %f reais \n" , pib_2);

    printf("numero_pontos_turistico: %d  \n " , numero_pontos_turistico_2);

    printf("Densidade Populacional: %f hab/km² \n " , densidade_populacional_2);

    printf("PIB per Capita: %f reais \n" , pib_per_capita_2);
    
    
    return 0;
}


