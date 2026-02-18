#include <stdio.h>
#include <string.h>

int main() {
    // _-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-
    // Dados da Carta 1
    // _-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-
    char estado1[3];      // string (exemplo: "SC")
    char codigo1[10];     // string
    char cidade1[50];     // string
    int populacao1;       // int
    float area1;          // float
    float pib1;           // float
    int pontos1;          // int

    // Valores calculados
    float densidade1, pibPerCapita1;

    // _-_-_-_-_-_-_-_-_-_-_-_-_-_-_-
    // Dados da Carta 2
    // _-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-
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

    getchar(); // limpa buffer do \n, pra não causar problemas

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
    // Calculos de densidade e pib per capita - Carta 1
    // _-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-

    densidade1 = (float)populacao1 / area1;
    pibPerCapita1 = (float)pib1 / populacao1;

    densidade2 = (float)populacao2 / area2;
    pibPerCapita2 = (float)pib2 / populacao2;

    // _-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-
    // Exibição(Saida) das cartas (dados + cálculos)
    // _-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-
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

    // Estrutura de descisao ultilizada pra realizar comparaçoes entrem cartas
    // Chave seletora que alterna os tipos de comparações (ex: int atributo = 1) para comparação de populações de uma carta a outra
    int atributo = 1;

    float valor1 = 0.0f, valor2 = 0.0f;
    const char *nomeAtributo = "Atributo";

    if (atributo == 1) { valor1 = (float)populacao1; valor2 = (float)populacao2; nomeAtributo = "Populacao"; }
    else if (atributo == 2) { valor1 = area1; valor2 = area2; nomeAtributo = "Area"; }
    else if (atributo == 3) { valor1 = pib1; valor2 = pib2; nomeAtributo = "PIB"; }
    else if (atributo == 4) { valor1 = densidade1; valor2 = densidade2; nomeAtributo = "Densidade Populacional"; }
    else if (atributo == 5) { valor1 = pibPerCapita1; valor2 = pibPerCapita2; nomeAtributo = "PIB per Capita"; }

    printf("\n_-_-_-_ Ring de Cartas(Comparação de Cartas)_-_-_-_-_-_ \n");
    printf("Atributo usado: %s\n", nomeAtributo);
    printf("%s: %.2f\n", cidade1, valor1);
    printf("%s: %.2f\n", cidade2, valor2);

    // Resultado
    if (valor1 == valor2) {
        printf("Resultado: Empate!\n");
    } else if (atributo == 4) {
        // Densidade: menor vence.
        printf("Resultado: %s venceu!\n", (valor1 < valor2) ? cidade1 : cidade2);
    } else {
        // Demais atributos: maior vence.
        printf("Resultado: %s venceu!\n", (valor1 > valor2) ? cidade1 : cidade2);
    }

    return 0;
}
