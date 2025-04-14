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
    int Pontos1, Pontos2, escolhaJogador;
    float Densidade1, Densidade2;
    float Percapita1, Percapita2;
    float SuperPoder1, SuperPoder2;
    
    
    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio
    printf("Carta 1 \n");

    printf("Insira o nome do estado: ");
    fgets(Estado1, sizeof(Estado1), stdin);  

    printf("Insira o código da carta: ");
    fgets(Codigo1, sizeof(Codigo1), stdin);
    //Cada Estado vai ter  4 cidades, a letra vai identificar o estado e o numero a cidade, Ex: A01, A02, B01 e B02
    printf("Insira o nome da cidade: ");
    fgets(Cidade1, sizeof(Cidade1), stdin);

    printf("Insira a população desta cidade: ");
    scanf("%d", &Populacao1);

    printf("Insira a área da cidade em KM²: ");
    scanf("%f", &Area1);

    printf("Insira o PIB da cidade: ");
    scanf("%f", &PIB1);

    printf("Insira os pontos turísticos da cidade: ");
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
    printf("Insira o nome do estado: ");
    fgets(Estado2, sizeof(Estado2), stdin);

    printf("Insira o código da carta: ");
    fgets(Codigo2, sizeof(Codigo2), stdin);

    printf("Insira o nome da cidade: ");
    fgets(Cidade2, sizeof(Cidade2), stdin);

    printf("Insira a população desta cidade: ");
    scanf("%d", &Populacao2);

    printf("Insira a área da cidade em KM²: ");
    scanf("%f", &Area2);

    printf("Insira o PIB da cidade: ");
    scanf("%f", &PIB2);

    printf("Insira os pontos turísticos da cidade: ");
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

    //Etapa para os jogadores escolher qual atributo para comparar e decidir o vencedor da rodada
    printf(" ## AGORA VAMOS COMPARAR AS CARTAS E VER QUEM GANHOU ##\n");
    printf("Escolha um atributo a ser comparado com as seguintes opções:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Números de pontos turísticos\n");
    printf("5. Densidade populacional\n");
    printf("6. PIB Per capita\n");
    printf("7. Super poder\n");
    printf("Digite uma das opções para comparar: ");
    scanf("%d", &escolhaJogador);

  switch (escolhaJogador)
  {
  case 1:
    printf("Atributo escolhido = População\n");
    if (Populacao1 == Populacao2){
        printf("Houve um EMPATE!!");
    } else if (Populacao1 > Populacao2){
        printf("A carta vencedora é: \n");
        printf("%s", &Estado1);
        printf("%s", &Cidade1);
        printf("%s", &Codigo1);
    } else{
        printf("A carta vencedora é: \n");
        printf("%s\n", &Estado2);
        printf("%s\n", &Cidade2);
        printf("%s\n", &Codigo2);
    }
    break;
   
    case 2:
    printf("Atributo escolhido = Área\n");
    if (Area1 == Area2){
        printf("Houve um EMPATE!!");
    } else if (Area1 > Area2){
        printf("A carta vencedora é: \n");
        printf("%s", &Estado1);
        printf("%s", &Cidade1);
        printf("%s", &Codigo1);
    } else{
        printf("A carta vencedora é: \n");
        printf("%s\n", &Estado2);
        printf("%s\n", &Cidade2);
        printf("%s\n", &Codigo2);
    }
    break;
    
    case 3:
    printf("Atributo escolhido = PIB\n");
    if (PIB1 == PIB2){
        printf("Houve um EMPATE!!");
    } else if (PIB1 > PIB2){
        printf("A carta vencedora é: \n");
        printf("%s", &Estado1);
        printf("%s", &Cidade1);
        printf("%s", &Codigo1);
    } else{
        printf("A carta vencedora é: \n");
        printf("%s\n", &Estado2);
        printf("%s\n", &Cidade2);
        printf("%s\n", &Codigo2);
    }
    break;
    
    case 4:
    printf("Atributo escolhido = Número de pontos Turísticos\n");
    if (Pontos1 == Pontos2){
        printf("Houve um EMPATE!!");
    } else if (Pontos1 > Pontos2){
        printf("A carta vencedora é: \n");
        printf("%s", &Estado1);
        printf("%s", &Cidade1);
        printf("%s", &Codigo1);
    } else{
        printf("A carta vencedora é: \n");
        printf("%s\n", &Estado2);
        printf("%s\n", &Cidade2);
        printf("%s\n", &Codigo2);
    }
    break;
    
    case 5:
    printf("Atributo escolhido = Densidade Papulacional\n");
    if (Densidade1 == Densidade2){
        printf("Houve um EMPATE!!");
    } else if (Densidade1 < Densidade2){
        printf("A carta vencedora é: \n");
        printf("%s", &Estado1);
        printf("%s", &Cidade1);
        printf("%s", &Codigo1);
    } else{
        printf("A carta vencedora é: \n");
        printf("%s\n", &Estado2);
        printf("%s\n", &Cidade2);
        printf("%s\n", &Codigo2);
    }
    break;
    
    case 6:
    printf("Atributo escolhido = PIB Per capita\n");
    if (Percapita1 == Percapita2){
        printf("Houve um EMPATE!!");
    } else if (Percapita1 > Percapita2){
        printf("A carta vencedora é: \n");
        printf("%s", &Estado1);
        printf("%s", &Cidade1);
        printf("%s", &Codigo1);
    } else{
        printf("A carta vencedora é: \n");
        printf("%s\n", &Estado2);
        printf("%s\n", &Cidade2);
        printf("%s\n", &Codigo2);
    }
    break;
    
    case 7:
    printf("Atributo escolhido = Super poder\n");
    if (SuperPoder1 == SuperPoder2){
        printf("Houve um EMPATE!!");
    } else if (SuperPoder1 > SuperPoder2){
        printf("A carta vencedora é: \n");
        printf("%s", &Estado1);
        printf("%s", &Cidade1);
        printf("%s", &Codigo1);
    } else{
        printf("A carta vencedora é: \n");
        printf("%s\n", &Estado2);
        printf("%s\n", &Cidade2);
        printf("%s\n", &Codigo2);
    }
    break;
  
  default:
  printf("Opção inválida!");

  break;
    }
   
    return 0;
  }