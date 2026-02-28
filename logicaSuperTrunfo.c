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

    getchar();

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
    densidade1    = (float)populacao1 / area1;
    pibPerCapita1 = pib1 / (float)populacao1;

    densidade2    = (float)populacao2 / area2;
    pibPerCapita2 = pib2 / (float)populacao2;

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

    // _-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-
    // NIVEL MESTRE - Escolha de DOIS atributos via menu dinâmico
    // _-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-

    int opcao1, opcao2;

    // --- Menu do 1º atributo ---
    printf("\n_-_-_-_-_-_ Escolha o 1o Atributo _-_-_-_-_-_\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per Capita\n");
    printf("Opcao: ");
    scanf("%d", &opcao1);

    // Valida entrada do 1º atributo
    if (opcao1 < 1 || opcao1 > 6) {
        printf("Opcao invalida para o 1o atributo! Encerrando.\n");
        return 1;
    }

    // --- Menu do 2º atributo (dinamico: omite a opcao ja escolhida) ---
    printf("\n_-_-_-_-_-_ Escolha o 2o Atributo _-_-_-_-_-_\n");

    // Exibe apenas as opcoes diferentes do 1º atributo escolhido
    if (opcao1 != 1) printf("1 - Populacao\n");
    if (opcao1 != 2) printf("2 - Area\n");
    if (opcao1 != 3) printf("3 - PIB\n");
    if (opcao1 != 4) printf("4 - Pontos Turisticos\n");
    if (opcao1 != 5) printf("5 - Densidade Populacional\n");
    if (opcao1 != 6) printf("6 - PIB per Capita\n");
    printf("Opcao: ");
    scanf("%d", &opcao2);

    // Valida: nao pode ser igual ao 1o e deve ser entre 1 e 6
    if (opcao2 < 1 || opcao2 > 6 || opcao2 == opcao1) {
        printf("Opcao invalida para o 2o atributo! Encerrando.\n");
        return 1;
    }

    // _-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-
    // Funcao auxiliar inline: busca o valor do atributo por opcao
    // Usamos switch para cada atributo escolhido
    // _-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-

    float atrib1_carta1 = 0.0f, atrib1_carta2 = 0.0f;
    float atrib2_carta1 = 0.0f, atrib2_carta2 = 0.0f;
    const char *nomeAtrib1 = "";
    const char *nomeAtrib2 = "";

    // Preenche valores e nome do 1º atributo
    switch (opcao1) {
        case 1: atrib1_carta1 = (float)populacao1; atrib1_carta2 = (float)populacao2; nomeAtrib1 = "Populacao";             break;
        case 2: atrib1_carta1 = area1;              atrib1_carta2 = area2;              nomeAtrib1 = "Area";                  break;
        case 3: atrib1_carta1 = pib1;               atrib1_carta2 = pib2;               nomeAtrib1 = "PIB";                   break;
        case 4: atrib1_carta1 = (float)pontos1;     atrib1_carta2 = (float)pontos2;     nomeAtrib1 = "Pontos Turisticos";     break;
        case 5: atrib1_carta1 = densidade1;         atrib1_carta2 = densidade2;         nomeAtrib1 = "Densidade Populacional"; break;
        case 6: atrib1_carta1 = pibPerCapita1;      atrib1_carta2 = pibPerCapita2;      nomeAtrib1 = "PIB per Capita";        break;
    }

    // Preenche valores e nome do 2º atributo
    switch (opcao2) {
        case 1: atrib2_carta1 = (float)populacao1; atrib2_carta2 = (float)populacao2; nomeAtrib2 = "Populacao";             break;
        case 2: atrib2_carta1 = area1;              atrib2_carta2 = area2;              nomeAtrib2 = "Area";                  break;
        case 3: atrib2_carta1 = pib1;               atrib2_carta2 = pib2;               nomeAtrib2 = "PIB";                   break;
        case 4: atrib2_carta1 = (float)pontos1;     atrib2_carta2 = (float)pontos2;     nomeAtrib2 = "Pontos Turisticos";     break;
        case 5: atrib2_carta1 = densidade1;         atrib2_carta2 = densidade2;         nomeAtrib2 = "Densidade Populacional"; break;
        case 6: atrib2_carta1 = pibPerCapita1;      atrib2_carta2 = pibPerCapita2;      nomeAtrib2 = "PIB per Capita";        break;
    }

    // _-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
    // Comparacao individual de cada atributo com operador ternario
    // Regra especial: Densidade Populacional - menor valor vence
    // Para os demais - maior valor vence
    // _-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_

    // Normaliza densidade: inverte o valor para que o calculo da soma
    // favoreça a carta com MENOR densidade (multiplicamos por -1)
    // Assim podemos usar a mesma logica de "maior soma vence" para todos
    float normalizado1_atrib1 = (opcao1 == 5) ? -atrib1_carta1 : atrib1_carta1;
    float normalizado1_atrib2 = (opcao2 == 5) ? -atrib2_carta1 : atrib2_carta1;

    float normalizado2_atrib1 = (opcao1 == 5) ? -atrib1_carta2 : atrib1_carta2;
    float normalizado2_atrib2 = (opcao2 == 5) ? -atrib2_carta2 : atrib2_carta2;

    // Soma dos atributos normalizados de cada carta
    float soma1 = normalizado1_atrib1 + normalizado1_atrib2;
    float soma2 = normalizado2_atrib1 + normalizado2_atrib2;

    // _-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-
    // Exibicao do resultado completo
    // _-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-
    printf("\n_-_-_-_ Ring de Cartas - Nivel Mestre _-_-_-_\n");

    printf("\n[Atributo 1: %s]\n", nomeAtrib1);
    printf("  %s: %.2f\n", cidade1, atrib1_carta1);
    printf("  %s: %.2f\n", cidade2, atrib1_carta2);

    // Operador ternario para exibir vencedor do atributo 1
    // Considera regra especial da densidade (opcao1 == 5)
    if (atrib1_carta1 == atrib1_carta2) {
        printf("  Resultado atributo 1: Empate!\n");
    } else if (opcao1 == 5) {
        printf("  Resultado atributo 1: %s venceu! (menor densidade)\n",
               (atrib1_carta1 < atrib1_carta2) ? cidade1 : cidade2);
    } else {
        printf("  Resultado atributo 1: %s venceu!\n",
               (atrib1_carta1 > atrib1_carta2) ? cidade1 : cidade2);
    }

    printf("\n[Atributo 2: %s]\n", nomeAtrib2);
    printf("  %s: %.2f\n", cidade1, atrib2_carta1);
    printf("  %s: %.2f\n", cidade2, atrib2_carta2);

    // Operador ternario para exibir vencedor do atributo 2
    if (atrib2_carta1 == atrib2_carta2) {
        printf("  Resultado atributo 2: Empate!\n");
    } else if (opcao2 == 5) {
        printf("  Resultado atributo 2: %s venceu! (menor densidade)\n",
               (atrib2_carta1 < atrib2_carta2) ? cidade1 : cidade2);
    } else {
        printf("  Resultado atributo 2: %s venceu!\n",
               (atrib2_carta1 > atrib2_carta2) ? cidade1 : cidade2);
    }

    // Resultado final pela soma dos atributos normalizados
    printf("\n[Resultado Final - Soma dos Atributos]\n");
    printf("  %s: %.2f (soma)\n", cidade1, soma1);
    printf("  %s: %.2f (soma)\n", cidade2, soma2);

    // Operador ternario integrado ao if-else para o resultado final
    if (soma1 == soma2) {
        printf("  Resultado: Empate!\n");
    } else {
        printf("  Resultado: %s venceu a rodada!\n",
               (soma1 > soma2) ? cidade1 : cidade2);
    }

    return 0;
}
