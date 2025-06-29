#include <stdio.h>

int main() {
    // Declaração das variáveis para a primeira carta
    char estado1;
    char codigo1[5];
    char nomeCidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadePopulacional1;

    // Leitura dos dados da primeira carta
    printf("Digite o estado (A-H) da carta 1: ");
    scanf(" %c", &estado1);
    printf("Digite o código da carta 1 (ex: A01): ");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade da carta 1: ");
    scanf(" %[^\n]", nomeCidade1);
    printf("Digite a população da cidade da carta 1: ");
    scanf("%lu", &populacao1);
    printf("Digite a área da cidade da carta 1 (em km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB da cidade da carta 1 (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos da carta 1: ");
    scanf("%d", &pontosTuristicos1);

    // Cálculo da densidade populacional para a primeira carta
    densidadePopulacional1 = (float)populacao1 / area1;

    // Declaração das variáveis para a segunda carta
    char estado2;
    char codigo2[5];
    char nomeCidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2;

    // Leitura dos dados da segunda carta
    printf("\nDigite o estado (A-H) da carta 2: ");
    scanf(" %c", &estado2);
    printf("Digite o código da carta 2 (ex: B02): ");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade da carta 2: ");
    scanf(" %[^\n]", nomeCidade2);
    printf("Digite a população da cidade da carta 2: ");
    scanf("%lu", &populacao2);
    printf("Digite a área da cidade da carta 2 (em km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade da carta 2 (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos da carta 2: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculo da densidade populacional para a segunda carta
    densidadePopulacional2 = (float)populacao2 / area2;

    // Menu para escolher o primeiro atributo
    int opcao1, opcao2;
    printf("\nEscolha o primeiro atributo para comparação:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("Digite sua opção: ");
    scanf("%d", &opcao1);

    // Menu para escolher o segundo atributo
    printf("\nEscolha o segundo atributo para comparação:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("Digite sua opção: ");
    scanf("%d", &opcao2);

    // Verifica se o usuário escolheu o mesmo atributo
    while (opcao1 == opcao2) {
        printf("Você não pode escolher o mesmo atributo duas vezes. Escolha um segundo atributo diferente:\n");
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Número de Pontos Turísticos\n");
        printf("5. Densidade Populacional\n");
        printf("Digite sua opção: ");
        scanf("%d", &opcao2);
    }

    // Comparação dos atributos escolhidos
    float valor1, valor2, soma1, soma2;
    char* atributo1;
    char* atributo2;

    // Comparação do primeiro atributo
    switch (opcao1) {
        case 1: // População
            valor1 = populacao1;
            valor2 = populacao2;
            atributo1 = "População";
            break;
        case 2: // Área
            valor1 = area1;
            valor2 = area2;
            atributo1 = "Área";
            break;
        case 3: // PIB
            valor1 = pib1;
            valor2 = pib2;
            atributo1 = "PIB";
            break;
        case 4: // Pontos Turísticos
            valor1 = pontosTuristicos1;
            valor2 = pontosTuristicos2;
            atributo1 = "Pontos Turísticos";
            break;
        case 5: // Densidade Populacional
            valor1 = densidadePopulacional1;
            valor2 = densidadePopulacional2;
            atributo1 = "Densidade Populacional";
            break;
        default:
            printf("Opção inválida!\n");
            return 1; // Encerra o programa em caso de erro
    }

    // Comparação do segundo atributo
    switch (opcao2) {
        case 1: // População
            valor1 += populacao1;
            valor2 += populacao2;
            atributo2 = "População";
            break;
        case 2: // Área
            valor1 += area1;
            valor2 += area2;
            atributo2 = "Área";
            break;
        case 3: // PIB
            valor1 += pib1;
            valor2 += pib2;
            atributo2 = "PIB";
            break;
        case 4: // Pontos Turísticos
            valor1 += pontosTuristicos1;
            valor2 += pontosTuristicos2;
            atributo2 = "Pontos Turísticos";
            break;
        case 5: // Densidade Populacional
            valor1 += densidadePopulacional1;
            valor2 += densidadePopulacional2;
            atributo2 = "Densidade Populacional";
            break;
        default:
            printf("Opção inválida!\n");
            return 1; // Encerra o programa em caso de erro
    }

    // Exibição dos resultados
    printf("\nComparação de cartas:\n");
    printf("Carta 1 - %s (%c): %.2f\n", nomeCidade1, estado1, valor1);
    printf("Carta 2 - %s (%c): %.2f\n", nomeCidade2, estado2, valor2);

    // Comparação dos valores
    if (opcao1 == 5) { // Se o primeiro atributo for Densidade Populacional
        if (valor1 < valor2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
        } else if (valor1 > valor2) {
            printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
        } else {
            printf("Resultado: Empate!\n");
        }
    } else if (opcao2 == 5) { // Se o segundo atributo for Densidade Populacional
        if (valor1 > valor2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
        } else if (valor1 < valor2) {
            printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
        } else {
            printf("Resultado: Empate!\n");
        }
    } else { // Para os outros atributos
        if (valor1 > valor2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
        } else if (valor1 < valor2) {
            printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
        } else {
            printf("Resultado: Empate!\n");
        }
    }

    // Soma dos atributos
    soma1 = valor1;
    soma2 = valor2;
    printf("Soma dos atributos:\n");
    printf("Carta 1 (%s): %.2f\n", nomeCidade1, soma1);
    printf("Carta 2 (%s): %.2f\n", nomeCidade2, soma2);

    // Comparação das somas
    if (soma1 > soma2) {
        printf("A carta com a maior soma é: Carta 1 (%s)\n", nomeCidade1);
    } else if (soma1 < soma2) {
        printf("A carta com a maior soma é: Carta 2 (%s)\n", nomeCidade2);
    } else {
        printf("Empate na soma dos atributos!\n");
    }

    return 0;
}
