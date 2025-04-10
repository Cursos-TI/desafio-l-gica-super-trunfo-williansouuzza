#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    char Estado1[50], Estado2[50];
    char Codigo1[50], Codigo2[50];
    char Cidade1[50], Cidade2[50];
    unsigned long int Populacao1, Populacao2;
    float Area1, Area2;
    float PIB1, PIB2;
    int Pontos1, Pontos2;
    float Densidade1, Densidade2;
    float Percapita1, Percapita2;
    float SuperPoder1, SuperPoder2;
    
    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio
    printf("Carta 1 \n");

    printf("Insira o nome do estado: \n");
    fgets(Estado1, sizeof(Estado1), stdin);  

    printf("Insira o código da carta: \n");
    fgets(Codigo1, sizeof(Codigo1), stdin);
    //Cada Estado vai ter  4 cidades, a letra vai identificar o estado e o numero a cidade, Ex: A01, A02, B01 e B02
    printf("Insira o nome da cidade: \n");
    fgets(Cidade1, sizeof(Cidade1), stdin);

    printf("Insira a população desta cidade: \n");
    scanf("%d", &Populacao1);

    printf("Insira a área da cidade em KM²: \n");
    scanf("%f", &Area1);

    printf("Insira o PIB da cidade: \n");
    scanf("%f", &PIB1);

    printf("Insira os pontos turísticos da cidade: \n");
    scanf("%d", &Pontos1);
    //Calculando a Densidade Populacional
    Densidade1 = Populacao1 / Area1;
    //Calculante PIB Per Capita
    Percapita1 = PIB1 / Populacao1;
    //Calculando Super Poder
    SuperPoder1 = Populacao1 + Area1 + PIB1 + Pontos1 + (1 / Densidade1) + Percapita1;
    getchar();

    //Cadastrando a segunda carta do jogo.
    printf("Carta 2 \n");
    printf("Insira o nome do estado: \n");
    fgets(Estado2, sizeof(Estado2), stdin);

    printf("Insira o código da carta: \n");
    fgets(Codigo2, sizeof(Codigo2), stdin);

    printf("Insira o nome da cidade: \n");
    fgets(Cidade2, sizeof(Cidade2), stdin);

    printf("Insira a população desta cidade: \n");
    scanf("%d", &Populacao2);

    printf("Insira a área da cidade em KM²: \n");
    scanf("%f", &Area2);

    printf("Insira o PIB da cidade: \n");
    scanf("%f", &PIB2);

    printf("Insira os pontos turísticos da cidade: \n");
    scanf("%d", &Pontos2);
     //Calculando a Densidade Populacional
     Densidade2 = Populacao2 / Area2;
     //Calculante PIB Per Capita
     Percapita2 = PIB2 / Populacao2;
      //Calculando Super Poder
    SuperPoder2 = Populacao2 + Area2 + PIB2 + Pontos2 + (1 / Densidade2) + Percapita2;
    getchar();

    printf("Dados da Carta 1 \n");
    printf("Nome do estado: %s", Estado1);
    printf("Código da carta: %s", Codigo1);
    printf("Nome da cidade: %s", Cidade1);
    printf("População da cidade: %d\n", Populacao1);
    printf("Área em KM² da cidade: %.1f\n", Area1);
    printf("PIB da cidade: %.2f\n", PIB1);
    printf("Numero de pontos turísticos: %d\n", Pontos1);
    printf("A Densidade populacional é: %.2f\n", Densidade1);
    printf("Riqueza média por pessoa na cidade (PIB per capita): %.2f\n", Percapita1);
    printf("Super Poder: %f\n", SuperPoder1);

    printf("Dados da Carta 2 \n");
    printf("Nome do estado: %s", Estado2);
    printf("Código da carta: %s", Codigo2);
    printf("Nome da cidade: %s", Cidade2);
    printf("População da cidade: %d\n", Populacao2);
    printf("Área em KM² da cidade: %.1f\n", Area2);
    printf("PIB da cidade: %.2f\n", PIB2);
    printf("Numero de pontos turísticos: %d\n", Pontos2);
    printf("A Densidade populacional é: %.2f\n", Densidade2);
    printf("Riqueza média por pessoa na cidade (PIB per capita): %.2f\n", Percapita2);
    printf("Super Poder: %f\n", SuperPoder2);

    //Comparando a população das duas cartas
    if (Populacao1 > Populacao2){
        printf("Á carta 1 venceu com a população maior.\n");
    } else{
        printf("Á carta 2 venceu com a população maior.\n");
    }
    //Comparando a área das duas cartas
    if (Area1 > Area2){
        printf("Á carta 1 venceu com a área maior.\n");
    } else{
        printf("Á carta 2 venceu com a área maior.\n");
    }
    //Comparando o PIB das duas cartas
    if (PIB1 > PIB2){
        printf("Á carta 1 venceu com o PIB maior.\n");
    } else{
        printf("Á carta 2 venceu com o PIB maior.\n");
    }
    //Comparando os pontos turísticos das duas cartas
    if (Pontos1 > Pontos2){
        printf("Á carta 1 venceu com mais pontos turísticos.\n");
    } else{
        printf("Á carta 2 venceu com mais pontos turísticos.\n");
    }
    //Comparando a densidade populacional das duas cartas
    if (Densidade1 < Densidade2){
        printf("Á carta 1 venceu com a menor densidade populacional.\n");
    } else{
        printf("Á carta 2 venceu com a menor densidade populacional.\n");
    }
    //Comparando a riqueza média por pessoa das duas cartas
    if (Percapita1 > Percapita2){
        printf("Á carta 1 venceu com  a renda média por pessoa maior.\n");
    } else{
        printf("Á carta 2 venceu com a renda média por pessoa maior.\n");
    }
    //Comparando o super poder das duas cartas
    if (SuperPoder1 > SuperPoder2){
        printf("Á carta 1 venceu com o super poder maior.\n");
    } else{
        printf("Á carta 2 venceu com o super poder maior.\n");
    }



  
        
    
    

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
