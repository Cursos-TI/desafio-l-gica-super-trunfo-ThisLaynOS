#include <stdio.h>
#include <string.h>

int main() {
    // _-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-
    // Dados da Carta 1
    // _-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-
    char estado1[3];
    char codigo1[10];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;

    float densidade1, pibPerCapita1;

    // _-_-_-_-_-_-_-_-_-_-_-_-_-_-_-
    // Dados da Carta 2
    // _-_-_-_-_-_-_-_-_-_-_-_-_-_-_-
    char estado2[3];
    char codigo2[10];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;

    float densidade2, pibPerCapita2;

    // _-_-_-_-_-_-_-_-_-_-_-_-_-_-_-
    // Entradas - Carta 1
    // _-_-_-_-_-_-_-_-_-_-_-_-_-_-_-
    printf("-_-_-_-_-Cadastro da Carta 1-_-_-_-_-\n");

    printf("Estado (ex: SC): ");
    scanf("%2s", estado1);

    printf("Codigo da carta: ");
    scanf("%9s", codigo1);

    getchar(); // limpa buffer do \n

    printf("Nome da cidade: ");
    fgets(cidade1, sizeof(cidade1), stdin);
    cidade1[strcspn(cidade1, "\n")] = 0;

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Pontos turisticos: ");
    scanf("%d", &pontos1);

    // _-_-_-_-_-_-_-_-_-_-_-_-_-_-_-
    // Entradas - Carta 2
    // _-_-_-_-_-_-_-_-_-_-_-_-_-_-_-
    printf("\n-_-_-_-_-Cadastro da Carta 2-_-_-_-_-\n");

    printf("Estado (ex: RJ): ");
    scanf("%2s", estado2);

    printf("Codigo da carta: ");
    scanf("%9s", codigo2);

    getchar();

    printf("Nome da cidade: ");
    fgets(cidade2, sizeof(cidade2), stdin);
    cidade2[strcspn(cidade2, "\n")] = 0;

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Pontos turisticos: ");
    scanf("%d", &pontos2);

    // _-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-
    // Calculos de densidade e pib per capita
    // _-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-
    densidade1 = (float)populacao1 / area1;
    pibPerCapita1 = (float)pib1 / populacao1;

    densidade2 = (float)populacao2 / area2;
    pibPerCapita2 = (float)pib2 / populacao2;

    // _-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-
    // Exibição das cartas
    // _-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-
    printf("\n_-_-_-_-_-_-_ CARTA 1 _-_-_-_-_-_-_\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turisticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f\n", densidade1);
    printf("PIB per Capita: %.2f\n", pibPerCapita1);

    printf("\n_-_-_-_-_-_-_ CARTA 2 _-_-_-_-_-_-_\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turisticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f\n", densidade2);
    printf("PIB per Capita: %.2f\n", pibPerCapita2);

    // _-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-
    // NOVO - NIVEL AVENTUREIRO
    // Menu interativo com switch para o jogador escolher o atributo
    // _-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-
    int opcao;

    printf("\n_-_-_-_-_-_ Menu de Comparacao _-_-_-_-_-_\n");
    printf("Escolha o atributo para comparar as cartas:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per Capita\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    // Variaveis para armazenar os valores comparados e o nome do atributo
    float valor1 = 0.0f, valor2 = 0.0f;
    const char *nomeAtributo = "";

    // switch seleciona qual atributo sera usado na comparacao
    switch (opcao) {
        case 1:
            valor1 = (float)populacao1;
            valor2 = (float)populacao2;
            nomeAtributo = "Populacao";
            break;
        case 2:
            valor1 = area1;
            valor2 = area2;
            nomeAtributo = "Area";
            break;
        case 3:
            valor1 = pib1;
            valor2 = pib2;
            nomeAtributo = "PIB";
            break;
        case 4:
            valor1 = (float)pontos1;
            valor2 = (float)pontos2;
            nomeAtributo = "Pontos Turisticos";
            break;
        case 5:
            valor1 = densidade1;
            valor2 = densidade2;
            nomeAtributo = "Densidade Populacional";
            break;
        case 6:
            valor1 = pibPerCapita1;
            valor2 = pibPerCapita2;
            nomeAtributo = "PIB per Capita";
            break;
        default:
            // Trata entrada invalida - requisito de seguranca do nivel aventureiro
            printf("Opcao invalida! Encerrando.\n");
            return 1;
    }

    // _-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-
    // Exibicao do resultado da comparacao
    // _-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-
    printf("\n_-_-_-_ Ring de Cartas (Comparacao de Cartas) _-_-_-_\n");
    printf("Atributo usado: %s\n", nomeAtributo);
    printf("%s: %.2f\n", cidade1, valor1);
    printf("%s: %.2f\n", cidade2, valor2);

    // Logica de comparacao com if-else aninhado
    // Para Densidade Populacional, menor valor vence (regra especial)
    // Para os demais atributos, maior valor vence
    if (valor1 == valor2) {
        printf("Resultado: Empate!\n");
    } else if (opcao == 5) {
        // Estrutura aninhada: dentro da condicao do atributo especial,
        // verifica qual carta tem o menor valor de densidade
        if (valor1 < valor2) {
            printf("Resultado: %s venceu! (menor densidade)\n", cidade1);
        } else {
            printf("Resultado: %s venceu! (menor densidade)\n", cidade2);
        }
    } else {
        // Para os demais atributos: maior valor vence
        if (valor1 > valor2) {
            printf("Resultado: %s venceu!\n", cidade1);
        } else {
            printf("Resultado: %s venceu!\n", cidade2);
        }
    }

    return 0;
}
