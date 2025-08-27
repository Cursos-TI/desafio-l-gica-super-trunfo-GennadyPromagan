#include <stdio.h>

#include <stdio.h>

int main() {
    

    char estado1[3];
    char codigo1[4];
    char nomeCidade1[50];
    unsigned int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    int comparacao;
    float percapita;
    float densidade;
    float inversodensicade;
    float SuperPoder;


    printf("\n*** Carta 1 ***\n");

    printf("Digite o estado [UF]\n");
    scanf("%2s", estado1);

    printf("Digite o codigo da carta:\n");
    scanf("%3s", codigo1);

    printf("Digite o nome da cidade:\n");
    scanf("%49s", nomeCidade1);

    printf("Digite a populacao:\n");
    scanf("%d", &populacao1);

    printf("Digite a Area(em km)\n");
    scanf("%f", &area1);

    printf("Digite o pib:\n");
    scanf("%f", &pib1);

    printf("Digite numero de pontos turisticos:\n");
    scanf("%d", &pontosTuristicos1);



    percapita = pib1 / (float)populacao1;
    densidade = populacao1 / (float)area1;
    inversodensicade = 1.0 / densidade;

    SuperPoder = (populacao1 + area1 + pib1 + pontosTuristicos1 + 
    percapita + inversodensicade);

//exibir dados

    printf("\n=== Dados da Carta 1 ===\n");
    

    printf("Estado: %s\n", estado1);
    printf("Codigo: %3s\n", codigo1);
    printf("Nome da cidade: %49s\n", nomeCidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area em km: %.3f\n", area1);
    printf("PIB: %.3f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("O pib per capita e: %f\n", percapita);
    printf("A densidade populacional e de: %.2f\n", densidade);
    printf("Valor do Super poder e : %.0f\n", SuperPoder);


//dados da carta 2
   
    char estado2[3];
    char codigo2[4];
    char nomeCidade2[50];
    unsigned int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float percapita2;
    float densidade2;
    float inversodensidade2;
    float superpoder2;


    printf("\n*** Carta 2 ***\n");

    printf("Digite o estado [UF]\n");
    scanf("%2s", estado2);

    printf("Digite o codigo da carta:\n");
    scanf("%3s", codigo2);

    printf("Digite o nome da cidade:\n");
    scanf("%49s", nomeCidade2);

    printf("Digite a populacao:\n");
    scanf("%d", &populacao2);

    printf("Digite a Area(em km)\n");
    scanf("%f", &area2);

    printf("Digite o pib:\n");
    scanf("%f", &pib2);

    printf("Digite numero de pontos turisticos:\n");
    scanf("%d", &pontosTuristicos2);

    percapita2 = pib2 / (float)populacao2;
    densidade2 = populacao2 / area2;
    inversodensidade2 = 1.0 / densidade2;

    superpoder2 = (populacao2 + area2 + pib2 + pontosTuristicos2 + 
    percapita2 + inversodensidade2);

//exibir dados 2

    printf("=== Dados da Carta 2 ===\n");
    
 
    printf("Estado: %s\n", estado2);
    printf("Codigo: %3s\n", codigo2);
    printf("Nome da cidade: %49s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area em km: %.3f\n", area2);
    printf("PIB: %.3f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("O pib per capita e: %f\n", percapita2);
    printf("A densidade populacional e de: %.2f\n", densidade2);
    printf("O valor do Super Poder e: %.0f\n", superpoder2);

    printf("\n ### BATALHA DE CARTAS ###\n");
    
// comparacao das cartas

    printf("Escolha a categoria de comparacao\n");
    printf("1. Comparar Populacao\n");
    printf("2. Comparar Area\n");
    printf("3. Comparar Pib\n");
    printf("4. Comparar Pontos turisticos\n");
    printf("5. Comparar Pib per capita\n");
    printf("6. Comparar Menor densidade populacional\n");
    printf("7. Comparar Super Poder\n");
    printf("Escolha: ");
    scanf("%d", &comparacao);

    switch(comparacao){
        case 1:
            printf("Categoria Populacao\n");
            if(populacao1 > populacao2){
                printf("Polulacao: A carta 1 venceu !!\n");

            }else if (populacao1 < populacao2){
                printf("Populacao: A carta 2 venceu !!\n");
            }else{
                printf("Houve um empate");
                }
        break;

        case 2:
            printf("Categoria Area\n");
            if(area1 > area2){
                printf("Area km: A carta 1 venceu !!\n");

            }else if (area1 < area2){
                printf("Area km: A carta 2 venceu !!\n");
             }else{
                printf("Houve um empate");
                }
        break;

        case 3:
            printf("Categoria Pib\n");
            if(pib1 > pib2){
                printf("Pib: A carta 1 venceu !!\n");

            }else if (pib1 < pib2){
                printf("Pib: A carta 2 venceu !!\n");
            }else{
                printf("Houve um empate");
                }
        break;

        case 4:
            printf("Categoria Pontos Turisticos\n");
            if(pontosTuristicos1 > pontosTuristicos2){
                printf("Pontos Turisticos: A carta 1 venceu !!\n");

            }else if(pontosTuristicos1 < pontosTuristicos2){
                printf("Pontos Turisticos: A carta 2 venceu !!\n");
            }else{
                printf("Houve um empate\n");
                }
        break;

        case 5:
            printf("Categoria Pib per capita\n");
            if(percapita > percapita2){
                printf("Pib Per Capita: A carta 1 venceu!!\n");
        
            }else if (percapita < percapita2){
                printf("Pib Per Capita: A carta 2 venceu !!\n");
            }else{
                printf("Houve um empate\n");
                }
        break;

        case 6:
            printf("Categoria Menor densidade populacional\n");
            if(densidade < densidade2){
                printf("Menor Densidade populacional: A carta 1 venceu !!\n");

            }else if (densidade > densidade2){
                printf("Menor Densidade populacional: A carta 2 venceu !!\n");
            }else{
                printf("Houve um empate\n");
                }
        break;

        case 7:
            printf("Categoria Super Poder\n");
            if(SuperPoder > superpoder2){
                printf("Super Poder: A carta 1 venceu !!\n");

            }else if (SuperPoder < superpoder2){
                printf("Super Poder: A carta 2 venceu !!\n");
            }else{
                printf("Houve um empate\n");
                }
        break;
        default:
            printf("Escolha invalida\n");
    }

    return 0;

}