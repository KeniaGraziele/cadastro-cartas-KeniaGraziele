#include<stdio.h>
#include<stdlib.h>

int main() {

    char estado[20];
    char codigo_da_carta[20];
    char nome_da_cidade[20];
    unsigned long int  populacao;
    float area_quadrada;
    float pib;
    int numero_pontos_turistico;
    float densidade_populacional;
    float pib_per_capita;
    float superpoder;
    
    char estado_2[20];
    char codigo_da_carta_2[20];
    char nome_da_cidade_2[20];
    unsigned long int populacao_2;
    float area_quadrada_2;
    float pib_2;
    int numero_pontos_turistico_2;  
    float densidade_populacional_2;
    float pib_per_capita_2;
    float superpoder2;

    int opcao;



    
    /////////////////Primeira Carta ////////////////////////////

    printf("Carta 1: \n");

    printf("estado: \n ");
    scanf("%s" , estado);

    printf("codigo da carta: \n ");
    scanf("%s" , codigo_da_carta);

    printf("nome da cidade: \n");
    scanf("%s" , nome_da_cidade );

    printf("populacao: \n ");
    scanf("%ld" , &populacao);

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
    scanf("%ld" , &populacao_2);

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

    printf("Populacao: %ld \n ", populacao);

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

    printf("Populacao: %ld \n ", populacao_2);

    printf("Area: %f km² \n  ", area_quadrada_2);

    printf("PIB: %f reais \n" , pib_2);

    printf("numero_pontos_turistico: %d  \n " , numero_pontos_turistico_2);

    printf("Densidade Populacional: %f hab/km² \n " , densidade_populacional_2);

    printf("PIB per Capita: %f reais \n" , pib_per_capita_2);


    //Calculo de super poder

     superpoder = (float) area_quadrada + pib + pib_per_capita + (float) numero_pontos_turistico + (1.0f / densidade_populacional);
     superpoder2 = (float) area_quadrada_2 + pib_2 + pib_per_capita_2 +(float) numero_pontos_turistico_2; +(1.0f / densidade_populacional_2);

    printf("\n==============================\n");
    printf("Comparando cartas com base no atributo area quadrada:\n");
    printf("Carta 1 %f " , area_quadrada);
    printf ("Carta 2 %f " , area_quadrada_2);

    printf("\n==============================\n");
    printf("Comparando cartas com base no atributo pib:\n");
    printf("Carta 1 %f " , pib);
    printf ("Carta 2 %f " , pib_2);

    printf("\n==============================\n");
    printf("Comparando cartas com base no atributo pib per capita:\n");
    printf("Carta 1 %f " , pib_per_capita);
    printf ("Carta 2 %f " , pib_per_capita_2);

    printf("\n==============================\n");
    printf("Comparando cartas com base no atributo numero pontos turisticos:\n");
    printf("Carta 1 %d " , numero_pontos_turistico);
    printf ("Carta 2 %d " , numero_pontos_turistico_2);

    printf("\n==============================\n");
    printf("Comparando cartas com base no atributo densidade populacional:\n");
    printf("Carta 1 %f " , densidade_populacional);
    printf ("Carta 2 %f " , densidade_populacional_2);

     if (superpoder > superpoder2)
    {
        printf("Resultado: carta 1 venceu!\n");
    }
    else if (superpoder2 > superpoder)
    {
        printf("Resultado: carta 2 venceu!\n");

    } 

    printf("\n=======Comparação de cartas (Atributo: Pib)========\n");
    printf("\n Carta 1 - %s: %f" , estado , pib );
    printf("\n Carta 2 - %s: %f" , estado_2 , pib_2 );

     if (pib > pib_2)
    {
        printf("\nResultado: carta 1 %s venceu!\n" , estado);
    }
    else if (pib_2 > pib)
    {
        printf("\nResultado: carta 2 %s venceu!\n" , estado_2);

    } 

    // Desafio nível intermediário

    printf("\n==============================\n");
    printf("Escolha um atributo para ser comparado entre as cartas:\n");
    printf("Opcao 1: Nome das cidades\nOpcao 2: Populacao\nOpcao 3: Area em quadrada\nOpcao 4: PIB\
        \nOpcao 5: Numero de pontos turistico\nOpcao 6: Densidade populacional\nOu digite N para ir para a comparacao total das cartas.\n"
    );
    scanf("%d", &opcao);
    
    switch (opcao)
    {
        case 1:
            printf("\n=======COMPARANDO POR NOME========\n");
            printf("Nome da cidade carta 1: %s\n", nome_da_cidade);
            printf("Nome da cidade carta 2: %s", nome_da_cidade_2);
            break;

        case 2:
            printf("\n=======COMPARANDO POR POPULACAO========\n");
            printf("Carta 1\n");
            printf("Cidade: %s\n", nome_da_cidade);
            printf("Populacao: %ld\n", populacao);
            printf("\n");
            printf("Carta 2\n");
            printf("Cidade: %s\n", nome_da_cidade_2);
            printf("Populacao: %ld\n", populacao_2);
            printf("\n");

            printf("Carta vencedora: \n");
            if (populacao > populacao_2)
            {
                printf("Carta 1 venceu!");
            }
            else if (populacao_2 > populacao)
            {
                printf("Carta 2 venceu!");
            }
            else 
            {
                printf("As cartas empataram!");
            }
            break;

        case 3:
            printf("\n=======COMPARANDO POR AREA========\n");
            printf("Carta 1\n");
            printf("Cidade: %s\n", nome_da_cidade);
            printf("Area: %2f\n", area_quadrada);
            printf("\n");
            printf("Carta 2\n");
            printf("Cidade: %s\n", nome_da_cidade_2);
            printf("Area: %2f\n", area_quadrada_2);
            printf("\n");

            printf("Carta vencedora: \n");
            if (area_quadrada_2 >area_quadrada_2)
            {
                printf("Carta 1 venceu!");
            }
            else if (area_quadrada_2 > area_quadrada_2)
            {
                printf("Carta 2 venceu!");
            }
            else 
            {
                printf("As cartas empataram!");
            }
            break;
        
        case 4:
            printf("\n=======COMPARANDO POR PIB========\n");
            printf("Carta 1\n");
            printf("Cidade: %s\n", nome_da_cidade);
            printf("PIB: %2f\n", pib);
            printf("\n");
            printf("Carta 2\n");
            printf("Cidade: %s\n", nome_da_cidade_2);
            printf("PIB: %2f\n", pib_2);
            printf("\n");

            printf("Carta vencedora: \n");
            if (pib > pib_2)
            {
                printf("Carta 1 venceu!");
            }
            else if (pib_2 > pib)
            {
                printf("Carta 2 venceu!");
            }
            else 
            {
                printf("As cartas empataram!");
            }
            break;

        case 5:
            printf("\n=======COMPARANDO POR PONTOS TURISTICOS========\n");
            printf("Carta 1\n");
            printf("Cidade: %s\n", nome_da_cidade);
            printf("Pontos turisticos: %d\n", numero_pontos_turistico);
            printf("\n");
            printf("Carta 2\n");
            printf("Cidade: %s\n", nome_da_cidade_2);
            printf("Pontos Turisticos: %d\n", numero_pontos_turistico_2);
            printf("\n");

            printf("Carta vencedora: \n");
            if (numero_pontos_turistico > numero_pontos_turistico_2)
            {
                printf("Carta 1 venceu!");
            }
            else if (numero_pontos_turistico_2 > numero_pontos_turistico)
            {
                printf("Carta 2 venceu!");
            }
            else 
            {
                printf("As cartas empataram!");
            }
            break;

        case 6:
            printf("\n=======COMPARANDO POR DENSIDADE POPULACIONAL========\n");
            printf("Carta 1\n");
            printf("Cidade: %s\n", nome_da_cidade);
            printf("Populacao: %2f\n", densidade_populacional);
            printf("\n");
            printf("Carta 2\n");
            printf("Cidade: %s\n", nome_da_cidade_2);
            printf("densidadePopulacional: %2f\n", densidade_populacional_2);
            printf("\n");

            printf("Carta vencedora: \n");
            if (densidade_populacional < densidade_populacional_2)
            {
                printf("Carta 1 venceu!");
            }
            else if (densidade_populacional_2 < densidade_populacional)
            {
                printf("Carta 2 venceu!");
            }
            else 
            {
                printf("As cartas empataram!");
            }
            break;
        
        default:
            break;
    }




    printf("\n=======COMPARANDO POR TODOS OS ATRIBUTOS========\n");
    printf("Comparacao das cartas: \n");
    printf("Area: Carta %d venceu (%d)\n", (populacao > populacao_2) ? 1 : 2, (populacao > populacao_2) ? 1 : 0);
    printf("Area: Carta %d venceu (%d)\n", (area_quadrada > area_quadrada_2 )? 1 : 2, (area_quadrada > area_quadrada_2) ? 1 : 0);
    printf("PIB: Carta %d venceu (%d)\n", (pib > pib_2) ? 1 : 2, (pib > pib_2) ? 1 : 0);
    printf("Numero de pontos turisticos: Carta %d venceu (%d)\n", (numero_pontos_turistico > numero_pontos_turistico_2) ? 1 : 2, (numero_pontos_turistico > numero_pontos_turistico_2) ? 1 : 0);
    printf("Densidade populacional: Carta %d venceu (%d)\n", (densidade_populacional < densidade_populacional_2) ? 1 : 2, (densidade_populacional < densidade_populacional_2) ? 1 : 0);
    printf("PIB per capita: Carta %d venceu (%d)\n", (pib_per_capita > pib_per_capita_2) ? 1 : 2, (pib_per_capita > pib_per_capita_2) ? 1 : 0);
    printf("Super poder: Carta %d venceu (%d)", (superpoder > superpoder2) ? 1 : 2, (superpoder > superpoder2) ? 1 : 0);

    
    
    return 0;
}


