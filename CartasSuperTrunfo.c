#include <stdio.h>

int main(){
    printf("Desafio Super Trunfo\n");
    printf("Novo Commit\n");

    char estado;
    char codigo[50];
    char nome[50];
    int populacao;
    float area;
    float pib;
    int numeropontosturisticos;
    float densidade_populacional;
    float pib_per_capita;

    printf("Carta 1: \n");

    printf("Estado:\n"); //A
    scanf("%s", &estado);

    printf("Codigo:\n"); //A01
    scanf("%s", &codigo);

    printf("Nome da Cidade:\n"); // SAO_PAULO
    scanf("%s", &nome);

    printf("Populacao:\n"); //12325000
    scanf("%d", &populacao);

    printf("Area:\n"); //1521.11
    scanf("%f", &area);

    printf("PIB:\n"); //69928000000
    scanf("%f", &pib);

    printf("Numero de Pontos Turisticos:\n"); //50
    scanf("%d", &numeropontosturisticos);

    densidade_populacional = (float)(populacao / area);
    pib_per_capita = (float)(pib / populacao);

    printf("Estado: %c \n", estado);
    printf("Codigo: %s \n", codigo);
    printf("Nome da Cidade: %s \n", nome);
    printf("Populacao: %d Milhoes de Habitantes\n", populacao);
    printf("Area: %.2f km2\n", area);
    printf("PIB: %.2f Bilhoes de Reais\n", pib);
    printf("Numero de pontos Turisticos: %d \n", numeropontosturisticos);
    printf("Densidade Populacional: %.2f Hab/km2\n", densidade_populacional);
    printf("PIB Per Capita: %.2f Reais  \n", pib_per_capita);


    printf("Carta 2: \n");

    printf("Estado:\n"); //B
    scanf("%s", &estado);

    printf("Codigo:\n"); //B01
    scanf("%s", &codigo);

    printf("Nome da Cidade:\n"); //RIO_DE_JANEIRO
    scanf("%s", &nome);

    printf("Populacao:\n"); //6748000
    scanf("%d", &populacao);

    printf("Area:\n"); //1200.25
    scanf("%f", &area);

    printf("PIB:\n"); //300500000000
    scanf("%f", &pib);

    printf("Numero de Pontos Turisticos:\n"); //30
    scanf("%d", &numeropontosturisticos);

    densidade_populacional = (float)(populacao / area);
    pib_per_capita = (float)(pib / populacao);

    printf("Estado: %c \n", estado);
    printf("Codigo: %s \n", codigo);
    printf("Nome da Cidade: %s \n", nome);
    printf("Populacao: %d Milhoes de Habitantes\n", populacao);
    printf("Area: %.2f km2\n", area);
    printf("PIB: %.2f Bilhoes de Reais\n", pib);
    printf("Numero de pontos Turisticos: %d \n", numeropontosturisticos);
    printf("Densidade Populacional: %.2f Hab/km2\n", densidade_populacional);
    printf("PIB Per Capita: %.2f Reais  \n", pib_per_capita);


    return 0;
}

//RESULTADOS
//Estado: A 
//Codigo: A01 
//Nome da Cidade: SAO_PAULO 
//Populacao: 12325000 Milhoes de Habitantes
//Area: 1521.11 km2
//PIB: 69279997952.00 Bilhoes de Reais
//Numero de pontos Turisticos: 50
//Densidade Populacional: 8102.64 Hab/km2
//PIB Per Capita: 5621.10 Reais
//Carta 2:
//Estado:
//B
//Codigo:
//B02
//Nome da Cidade:
//RIO_DE_JANEIRO
//Populacao:
//6748000
//Area:
//1200.25
//PIB:
//300500000000
//Numero de Pontos Turisticos:
//30
//Estado: B 
//Codigo: B02
//Nome da Cidade: RIO_DE_JANEIRO
//Populacao: 6748000 Milhoes de Habitantes
//Area: 1200.25 km2
//PIB: 300499992576.00 Bilhoes de Reais
//Numero de pontos Turisticos: 30
//Densidade Populacional: 5622.16 Hab/km2
//PIB Per Capita: 44531.71 Reais
