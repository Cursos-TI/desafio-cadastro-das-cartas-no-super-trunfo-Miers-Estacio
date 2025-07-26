#include<stdio.h>

int main(){

    char estado1, estado2;   // variável da letra do Estado

    char codigo1[4], codigo2[4]; //variável do código do Estado

    char nome1[20], nome2[20];  //variável do nome dos Estados

    int pop1, pop2;  //variável da população dos Estados

    float area1, area2;  //variável da área dos Estados

    float pib1, pib2;  //variável do PIB dos Estados

    int pontos1, pontos2;  //variável do número de pontos turísticos


    printf ("\n\n\n\n********************  SUPER TRUNFO ********************\n\n\n\n");

    printf("Cadasto de Cartas\n\n\n");

    printf("Primeiro Estado:\n\n");


    printf("Digite a letra referente ao Estado: ");       // Entrada de variáveis da primeira carta
    scanf("%c", &estado1);

    printf("Digite o código da carta: ");
    scanf("%s", codigo1);

    printf("Digite o Estado: ");
    scanf("%s", nome1);

    printf("Digite a população do Estado: ");
    scanf("%d", &pop1);

    printf("Digite a área do Estado: ");
    scanf("%f", &area1);

    printf("Digite o PIB do Estado: ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos1);

    printf("\n\nSegundo Estado\n\n");


    printf("Digite a letra referente ao Estado: ");       // Entrada de variáveis da segunda carta
    scanf(" %c", &estado2);

    printf("Digite o código da carta: ");
    scanf("%s", codigo2);

    printf("Digite o Estado: ");
    scanf("%s", nome2);

    printf("Digite a população do Estado: ");
    scanf("%d", &pop2);

    printf("Digite a área do Estado: ");
    scanf("%f", &area2);

    printf("Digite o PIB do Estado: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d",&pontos2);


    printf("\n\nCarta Número 1;\n");    //informações da primeira carta

    printf("Estado: %c\n", estado1);

    printf("Código: %s\n", codigo1);

    printf("Nome da Cidade: %s\n", nome1);

    printf("População: %d\n", pop1);

    printf("Área: %.2f Km\n", area1);

    printf("PIB: %.2f Bilhões de reais\n", pib1);

    printf("Número de Pontos Turísticos: %d\n", pontos1);


    printf("\n\nCarta Número 2;\n");    //informações da segunda carta

    printf("Estado: %c\n", estado2);

    printf("Código: %s\n", codigo2);

    printf("Nome da Cidade: %s\n", nome2);

    printf("População: %d\n", pop2);

    printf("Área: %.2f Km²\n", area2);

    printf("PIB: %.2f Bilhões de reais\n", pib2);

    printf("Número de Pontos Turísticos: %d\n\n", pontos2);



return 0;
}
