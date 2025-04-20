#include <stdio.h>

int main() {
    
    char Estado1[50], Estado2[50];
    char Codigo1[50], Codigo2[50];
    char Cidade1[50], Cidade2[50];
    unsigned long int Populacao1, Populacao2;
    float Area1, Area2, resultado1, resultado2, resultadoFinal;
    float PIB1, PIB2;
    int Pontos1, Pontos2, escolhaJogador1, escolhaJogador2, escolhaJogador3, escolhaJogador4;
    float Densidade1, Densidade2, somaJogador1 = 0, somaJogador2 = 0;
    float Percapita1, Percapita2;
    float SuperPoder1, SuperPoder2;
    
    
    
    // Boas vindas ao jogo e explicando algumas regras
    printf(" ## Seja Bem-vindo ao Super Trunfo ##\n");
    printf("Cada jogador vai escolher uma cidade e responder as perguntas com os dados da mesma.\n");
    printf("Será Possivel cadastras apenas 2 cartas.\n");
    printf("BORA COMEÇAR A JOGAR !!\n");

    // Cadastrando a primeira carta do jogo

    printf("Carta 1 \n");

    printf("Insira o nome do estado: ");
    fgets(Estado1, sizeof(Estado1), stdin);
    //Código  da carta é uma letra e dois numeros. Exemplo: A01, B01.
    printf("Insira o código da carta: ");
    fgets(Codigo1, sizeof(Codigo1), stdin);
  
    printf("Insira o nome da cidade: ");
    fgets(Cidade1, sizeof(Cidade1), stdin);

    printf("Insira a população desta cidade: ");
    scanf("%lu", &Populacao1);

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
    scanf("%lu", &Populacao2);

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

    //Apresentando os dados de cada carta...

    printf("Dados da Carta 1 \n");
    printf("Nome do estado: %s", Estado1);
    printf("Código da carta: %s", Codigo1);
    printf("Nome da cidade: %s", Cidade1);
    printf("População da cidade: %lu\n", Populacao1);
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
    printf("População da cidade: %lu\n", Populacao2);
    printf("Área em KM² da cidade: %.1f\n", Area2);
    printf("PIB da cidade: %.2f\n", PIB2);
    printf("Numero de pontos turísticos: %d\n", Pontos2);
    printf("A Densidade populacional é: %.2f\n", Densidade2);
    printf("Riqueza média por pessoa na cidade (PIB per capita): %.2f\n", Percapita2);
    printf("Super Poder: %f\n", SuperPoder2);

    //Etapa para os jogadores escolher qual atributo para comparar e decidir o vencedor da rodada
    printf(" ## AGORA VAMOS COMPARAR AS CARTAS ESCOLHIDAS E VER QUEM GANHOU ##\n");
    printf("Escolha dois atributos a ser comparado com as seguintes opções:\n");
    printf("não pode repetir os atributos escolhidos.\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Números de pontos turísticos\n");
    printf("5. Densidade populacional\n");
    printf("6. PIB Per capita\n");
    printf("7. Super poder\n");

    // Nessa Etapa o Jogador 1 vai escolher seus atributos
    
    printf("jogador 1 é sua vez\n");
    printf("Digite o primeiro atributo para comparar: ");
    scanf("%d", &escolhaJogador1);

    printf("Digite o segundo atributo para comparar: ");
    scanf("%d", &escolhaJogador2);
    // Verificando se o jogador 1 não escolheu os mesmo atributos

    if (escolhaJogador2 == escolhaJogador1){
        printf("Você não pode escolher o mesmo atributo duas vezes.\n");
    return 1;
    }

    // Agora é a vez do 2 Jogador escolher seus atributos

    printf("Jogador 2 é sua vez\n");
    printf("Digite o primeiro atributo para comparar: ");
    scanf("%d", &escolhaJogador3);

    printf("Digite o segundo atributo para comparar: ");
    scanf("%d", &escolhaJogador4);
    // Verificando se o jogador 2 não escolheu os mesmo atributos
    if (escolhaJogador4 == escolhaJogador3){
        printf("Você não pode escolher o mesmo atributo duas vezes.\n");
    return 1;
    }
    
   
    // Atribuindo as escolhas dos jogadores  e acrescentando a soma do jogador
    switch (escolhaJogador1) {
      case 1: somaJogador1 += Populacao1; 
      printf("Atributo escolhido (Jogador 1) = População\n");
      break;
      case 2: somaJogador1 += Area1;
      printf("Atributo escolhido (Jogador 1) = Área\n"); 
      break;;
      case 3: somaJogador1 += PIB1;
      printf("Atributo escolhido (Jogador 1) = PIB\n"); 
      break;
      case 4: somaJogador1 += Pontos1;
      printf("Atributo escolhido (Jogador 1) = Pontos Turísticos\n");
      break;
      case 5: somaJogador1 += Densidade1;
      printf("Atributo escolhido (Jogador 1) = Densidade Populacional\n"); 
      break;
      case 6: somaJogador1 += Percapita1;
      printf("Atributo escolhido (Jogador 1) = PIB Per Capita\n"); 
      break;
      case 7: somaJogador1 += SuperPoder1;
      printf("Atributo escolhido (Jogador 1) = Super Poder\n"); 
      break;
      default:
      printf("Escolha inválida.\n");
      return 1;
      }

    switch (escolhaJogador2) {
        case 1: somaJogador1 += Populacao1;
        printf("Atributo escolhido (Jogador 1) = População\n");
        break;
        case 2: somaJogador1 += Area1;
        printf("Atributo escolhido (Jogador 1) = Área\n");
        break;;
        case 3: somaJogador1 += PIB1;
        printf("Atributo escolhido (Jogador 1) = PIB\n");
        break;
        case 4: somaJogador1 += Pontos1;
        printf("Atributo escolhido (Jogador 1) = Pontos Turísticos\n");
        break;
        case 5: somaJogador1 += Densidade1;
        printf("Atributo escolhido (Jogador 1) = Densidade Populacional\n");
        break;
        case 6: somaJogador1 += Percapita1;
        printf("Atributo escolhido (Jogador 1) = PIB Per Capita\n");
        break;
        case 7: somaJogador1 += SuperPoder1;
        printf("Atributo escolhido (Jogador 1) = Super Poder\n");
        break;
        default:
        printf("Escolha inválida.\n");
        return 1;
    }

    // Comparando os atributos do jogador 2

    switch (escolhaJogador3) {
      case 1: somaJogador2 += Populacao2;
      printf("Atributo escolhido (Jogador 2) = População\n");
      break;
      case 2: somaJogador2 += Area2;
      printf("Atributo escolhido (Jogador 2) = Árear\n");
      break;;
      case 3: somaJogador2 += PIB2;
      printf("Atributo escolhido (Jogador 2) = PIB\n");
      break;
      case 4: somaJogador2 += Pontos2;
      printf("Atributo escolhido (Jogador 2) = Pontos Turísticos\n");
      break;
      case 5: somaJogador2 += Densidade2;
      printf("Atributo escolhido (Jogador 2) = Densidade Populacional\n");
      break;
      case 6: somaJogador2 += Percapita2;
      printf("Atributo escolhido (Jogador 2) = PIB Per Capita\n");
      break;
      case 7: somaJogador2 += SuperPoder2;
      printf("Atributo escolhido (Jogador 2) = Super Poder\n");
      break;
      default:
      printf("Escolha inválida.\n");
      return 1;
  }

  switch (escolhaJogador4) {
    case 1: somaJogador2 += Populacao2;
    printf("Atributo escolhido (Jogador 2) = População\n");
    break;
    case 2: somaJogador2 += Area2;
    printf("Atributo escolhido (Jogador 2) = Área\n");
    break;;
    case 3: somaJogador2 += PIB2;
    printf("Atributo escolhido (Jogador 2) = PIB\n");
    break;
    case 4: somaJogador2 += Pontos2;
    printf("Atributo escolhido (Jogador 2) = Pontos Turísticos\n");
    break;
    case 5: somaJogador2 += Densidade2;
    printf("Atributo escolhido (Jogador 2) = Densidade Populacional\n");
    break;
    case 6: somaJogador2 += Percapita2; 
    printf("Atributo escolhido (Jogador 2) = PIB Per Capita\n");
    break;
    case 7: somaJogador2 += SuperPoder2;
    printf("Atributo escolhido (Jogador 2) = Super Poder\n");
    break;
    default:
    printf("Escolha inválida.\n");
    return 1;
}

// Resultado Final

if(somaJogador1 > somaJogador2) {
  printf("O jogador 1 venceu com a carta  do Estado de %s, cidade de %s", Estado1, Cidade1);
  printf("Atributos escolhidos foram %d e %d, a soma dos dois foi %.2f.\n", escolhaJogador1, escolhaJogador2, somaJogador1);
  printf("O jogador 2 perdeu com a carta do Estado %s, cidade de %s", Estado2, Cidade2);
  printf("Atributos escolhidos foram %d e %d, a soma dos dois foi %.2f.\n", escolhaJogador3, escolhaJogador4, somaJogador2);
} else if(somaJogador1 < somaJogador2){
  printf("O jogador 2 venceu com a carta  do Estado de %s, cidade de %s", Estado2, Cidade2);
  printf("Atributos escolhidos foram %d e %d, a soma dos dois foi %.2f.\n", escolhaJogador3, escolhaJogador4, somaJogador2);
  printf("O jogador 1 perdeu com a carta do Estado %s, cidade de %s", Estado1, Cidade1);
  printf("Atributos escolhidos foram %d e %d, a soma dos dois foi %.2f.\n", escolhaJogador1, escolhaJogador2, somaJogador1);
} else {
  printf("Houve um empate!\n");
  printf("Segue abaixo os resultados das escolhas dos jogadores:\n");
  printf("Resultado jogador 1 foi %.2f.\n", somaJogador1);
  printf("Resultado jogador 2 foi %.2f.\n", somaJogador2);
}

  
    return 0;
  }