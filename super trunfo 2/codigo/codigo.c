#include <stdio.h>

int main (){

    //declarando todas as variaveis que usei no codigo

    char estado1[50], estado2[50];
    char codigo[2] = {'A', 'B'};
    char nome1[50], nome2[50];
    unsigned long int populacao1, populacao2;
    int opcao;
    int pontos1, pontos2;
    float area1, area2;
    float PIB1, PIB2;
    float densidade1, densidade2;
    float PIBC1, PIBC2;
    float poder1, poder2;

    //cadastro da primeira carta:

    printf("@@ -Cadastro de Cartas- @@\n");

    printf("\nCadastro da primeira carta: \n");
    printf("Qual o estado? \n");
    scanf(" %s", estado1);                          
    printf("Qual o nome? \n");
    scanf(" %s", nome1);
    printf("Número da população? \n");
    scanf(" %lu", &populacao1);
    printf("Número de área? \n");
    scanf(" %f", &area1);
    printf("Número do PIB? \n");
    scanf(" %f", &PIB1);
    printf("Números de pontos turísticos? \n");
    scanf(" %d", &pontos1);

    //Cadastro da segunda carta:

    printf("\nCadastro da segunda:\n");

    printf("Qual o estado? \n");
    scanf("%s", estado2);
    printf("Qual o nome? \n");
    scanf("%s", nome2);
    printf("Número da população? \n");
    scanf("%lu", &populacao2);
    printf("Número de área? \n");
    scanf("%f", &area2);
    printf("Número do PIB? \n");
    scanf("%f", &PIB2);
    printf("Números de pontos turísticos? \n");
    scanf("%d", &pontos2);

    //calculos e tal

    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    PIBC1 = PIB1 / populacao1;
    PIBC2 = PIB2 / populacao2;

    poder1 = populacao1 + area1 + PIB1 + pontos1 + PIBC1 - densidade1;
    poder2 = populacao2 + area2 + PIB2 + pontos2 + PIBC2 - densidade2;

    printf("\nCarta 1:\n");

    printf(" Estado: %s\n Código: %c01\n Nome: %s\n população: %d\n", estado1, codigo[0], nome1, populacao1);
    printf(" Área: %f km²\n PIB: %2.f\n Pontos Turistíscos: %d\n", area1, PIB1, pontos1);
    printf(" densidade: %.2f hab/km².\n PIB per capita: %.2f reais\n", densidade1, PIBC1);
    printf(" O poder de %s é: %.2f\n", nome1, poder1);

    printf("\nCarta 2:\n");

    printf(" Estado: %s\n Código: %c02\n Nome: %s\n população: %d\n", estado2, codigo[1], nome2, populacao2);
    printf(" Área: %f km²\n PIB: %2.f\n Pontos Turistíscos: %d\n", area2, PIB2, pontos2);
    printf(" densidade: %.2f hab/km²\n PIB per capita: %.2f reais\n", densidade2, PIBC2);
    printf(" O poder de %s é: %.2f\n", nome2, poder2);


    printf("\n### Qual atributo deseja comparar? ###\n");
    printf("1. Nome do País\n");
    printf("2. População\n");
    printf("3. Área\n");
    printf("4. PIB\n");
    printf("5. Pontos Turísticos\n");
    printf("6. Densidade demográfica\n");
    printf("Escolha: ");
    scanf("%d", &opcao);
    
    switch (opcao)
    {
       case 1:
        printf("País:%s - País:%s", nome1, nome2);
        break;

       case 2:
        printf("Nome: %s - População: %d\n", nome1, populacao1);
        printf("Nome: %s - População: %d\n", nome2, populacao2);

        if (populacao1 > populacao2)
        {
            printf("*A carta 1 ganhou!*\n");
        } else if (populacao1 < populacao2)
        {
            printf("*A carta 2 ganhou!*\n");
        } else 
        {
            printf("*EMPATE*");
        }
        break;
    
       case 3:
        printf("Nome: %s - Área: %f\n", nome1, area1);
        printf("Nome: %s - Área: %f\n", nome2, area2);

        if (area1 > area2)
        {
            printf("*A carta 1 ganhou!*\n");
        } else if (area1 < area2)
        {
            printf("*A carta 2 ganhou!*\n");
        } else 
        {
            printf("*EMPATE*");
        }
        break;
        
       case 4:
        printf("Nome: %s - PIB: %2.f\n", nome1, PIB1);
        printf("Nome: %s - PIB: %2.f\n", nome2, PIB2);

        if (PIB1 > PIB2)
        {
            printf("*A carta 1 ganhou!*\n");
        } else if (PIB1 < PIB2)
        {
            printf("*A carta 2 ganhou!*\n");
        } else 
        {
            printf("*EMPATE*");
        }
        break;

       case 5:
        printf("Nome: %s - Pontos Turísticos: %d\n", nome1, pontos1);
        printf("Nome: %s - Pontos Turísticos: %d\n", nome2, pontos2);

        if (pontos1 > pontos2)
        {
            printf("*A carta 1 ganhou!*\n");
        } else if (pontos1 < pontos2)
        {
            printf("*A carta 2 ganhou!*\n");
        } else 
        {
            printf("*EMPATE*");
        }
        break;

       case 6:
        printf("Nome: %s - Densidade: %f\n", nome1, densidade1);
        printf("Nome: %s - Densidade: %f\n", nome2, densidade2);

        if (densidade1 < densidade2)
        {
            printf("*A carta 1 ganhou!*\n");
        } else if (densidade1 > densidade2)
        {
            printf("*A carta 2 ganhou!*\n");
        } else 
        {
            printf("*EMPATE*");
        }
        break;
    
       default:
        printf("Atributo Inválido!");
        break;
    }

    return 0;
}    
