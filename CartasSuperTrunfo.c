#include <stdio.h>

int main(){
    printf("Desafio Super Trunfo\n");
    printf("Novo Commit\n");

    char estado;
    char codigo[5];
    char nome[50];
    int populacao;
    float area;
    float pib;
    int numeropontosturisticos;

    printf("Carta 1: \n");

    printf("Estado:\n");
    scanf("%c", &estado);

    printf("Código:\n");
    scanf("%s", &codigo);

    printf("Nome da Cidade:\n");
    scanf("%s", &nome);

    printf("População:\n");
    scanf("%d", &populacao);

    printf("Área:\n");
    scanf("%f", &area);

    printf("PIB:\n");
    scanf("%f", &pib);

    printf("Número de Pontos Turísticos:\n");
    scanf("%d", &numeropontosturisticos);

    printf("Estado: %c \n", estado);
    printf("Código: %s \n", codigo);
    printf("Nome da Cidade: %s \n", nome);
    printf("População: %d \n", populacao);
    printf("Área: %f \n", area);
    printf("PIB: %f \n", pib);
    printf("Número de pontos Turísticos: %d \n", numeropontosturisticos);


    return 0;
}
