#include <stdio.h>

int main (){

    //declarando todas as variaveis que usei no codigo

    char estado1[50], estado2[50];
    char codigo[2] = {'A', 'B'};
    char nome1[50], nome2[50];
    unsigned long int populacao1, populacao2;
    int atributo1, atributo2;
    int resultado1, resultado2;
    int pontos1, pontos2;
    float area1, area2;
    float PIB1, PIB2;
    float densidade1, densidade2;
    float PIBC1, PIBC2;
    float poder1, poder2;
    char nomeAtributo1[20], nomeAtributo2[50];

    //cadastro da primeira carta:

    printf("Bem-Vindo ao jogo de Super trunfo!\n");
    printf("\n-Cadastro de Cartas-\n");

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


    printf("\nEscolha dois atributos para comparar!\n");
    printf("Escolha o PRIMEIRO atributo:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade demográfica\n");

    printf("Escolha: ");
    scanf("%d", &atributo1);
    
    switch (atributo1)
    {
    case 1:
        printf("Você escolheu população!");
        resultado1 = populacao1 > populacao2 ? 1 : 0;
        break;

    case 2:
        printf("Você escolheu área!");
        resultado1 = area1 > area2 ? 1 : 0;
        break;

    case 3:
        printf("Você escolheu PIB!");
        resultado1 = PIB1 > PIB2 ? 1 : 0;
        break;
        
    case 4:
        printf("Você escolheu pontos turistíscos!");
        resultado1 = pontos1 > pontos2 ? 1 : 0;
        break;

    case 5:
        printf("Você escolheu densidade populacional!");
        resultado1 = densidade1 < densidade2 ? 1 : 0;
        break;

     default:
        printf("Atributo Inválido!");
        break;
    }

    printf("Escolha o SEGUNDO atributo:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade demográfica\n");

    printf("Escolha: ");
    scanf("%d", &atributo2);

    if (atributo2 == atributo1)
    {
        printf("Você escolheu o mesmo atributo!");
    } else {
        switch (atributo2)
    {
    case 1:
        printf("Você escolheu população!");
        resultado2 = populacao1 > populacao2 ? 1 : 0;
        break;
    
    case 2:
        printf("Você escolheu área!");
        resultado2 = area1 > area2 ? 1 : 0;
        break;

    case 3:
        printf("Você escolheu PIB!");
        resultado2 = PIB1 > PIB2 ? 1 : 0;
        break;
        
    case 4:
        printf("Você escolheu pontos turistícos!");
        resultado2 = pontos1 > pontos2 ? 1 : 0;
        break;

    case 5:
        printf("Você escolheu densidade populacional!");
        resultado2 = densidade1 < densidade2 ? 1 : 0;
        break;      

     default:
        printf("Atributo Inválido!");
        break;
    }
    }

     printf("\nÉ HORA DO DUELO!\n");

     if (resultado1 != resultado2) {
        printf("DEU EMPATE!\n");

     } else if (resultado1 == 1 && resultado2 == 1) {
        printf("Parabéns, Carta 1 Venceu o duelo!");

     } else if (resultado1 == 0 && resultado2 == 0) {
        printf("Parabéns, Carta 2 Venceu o duelo!");
     }    
    
   

    return 0;
}    
