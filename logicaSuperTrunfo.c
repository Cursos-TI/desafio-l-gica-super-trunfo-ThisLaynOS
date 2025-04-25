#include <stdio.h>

int main() {
    // Declarações de variaveis
    char Estado1[20], Carta_codigo1[20], Cidade1[20];

    unsigned long int Numero_populacional1;
    int Numero_pontos_turisticos1;

    float area_km1, pib1, densidade1, pib_per_capita1;

    float super_poder1;


    char Estado2[20], Carta_codigo2[20], Cidade2[20];

    unsigned long int Numero_populacional2;
    int Numero_pontos_turisticos2;

    float area_km2, pib2, densidade2, pib_per_capita2;

    float super_poder2;

    // Os printf exibem mensagens instruindo o usuário.
    // Os scanf leem os dados enviados pelo usuário e os armazenam nos endereços de memória das variáveis.
    printf(
        "_-_-_-Cartas do Super Trunfo_-_-_-\n"
        "-> Digite a sigla do estado: \n"
        );
    scanf("%s", Estado1);

    printf("-> Digite o codigo da carta: \n");
    scanf("%s", Carta_codigo1);

    printf("-> Digite o nome da cidade: \n");
    scanf("%s", Cidade1);

    printf("-> Digite o numero populacional: \n");
    scanf("%ld", &Numero_populacional1);

    printf("-> Digite o numero de pontos turisticos: \n");
    scanf("%d", &Numero_pontos_turisticos1);

    printf("-> Digite o numero da Area Km: \n");
    scanf("%f", &area_km1);

    printf("-> Digite o numero do pib: \n");
    scanf("%f", &pib1);

    densidade1 = (float) Numero_populacional1 / area_km1; // Calcula densidade populacional, forçando conversao do int pra float da variavel Numero_populacional  em seguida realizando o calculo e Guardando na variavel densidade
    pib_per_capita1 = pib1 / (float) Numero_populacional1; // Converti Numero_populacional de int para float para garantir precisão no cálculo,
    // obtendo assim o PIB per capita correto em reais por habitante

    super_poder1 = (float) Numero_populacional1 + area_km1 + pib1 + pib_per_capita1 + (area_km1 / (float) Numero_populacional1) + Numero_pontos_turisticos1; // Soma de todos atributos com o inverso de densidade (area_km1 / (float) Numero_populacional1) no final tudo e calculado e o valor e amazenado na variavel super_poder1


    printf(
     "_-_-_-_-_-_- Carta 1 _-_-_-_-_-_- \n"
     "- Estado: %s\n"
     "- Codigo da carta: %s\n"
     "- Cidade: %s\n"
     "- Numero Populacional: %ld\n"
     "- Numero de Pontos Turisticos: %d\n"
     "- Area: %f km2\n"
     "- PIB: R$ %.2f bilhões de reais\n"
     "- Densidade Populacional: %.2f hab/km²\n"
     "- PIB per Capita: %.2f reais\n"
     "- Super Poder: %.2f\n",
     Estado1, Carta_codigo1, Cidade1, Numero_populacional1, Numero_pontos_turisticos1, area_km1, pib1, densidade1, pib_per_capita1, super_poder1);

    // O Mesmo ciclo se repete na carta 2
    // Os printf exibem mensagens instruindo o usuário.
    // Os scanf leem os dados enviados pelo usuário e os armazenam nos endereços de memória das variáveis.


    printf("\n_-_-_-_-_-_- Carta 2 _-_-_-_-_-_-\n"
       "-> Digite a sigla do estado: \n");
    scanf("%s", Estado2);

    printf("-> Digite o codigo da carta: \n");
    scanf("%s", Carta_codigo2);

    printf("-> Digite o nome da cidade: \n");
    scanf("%s", Cidade2);

    printf("-> Digite o numero populacional: \n");
    scanf("%ld", &Numero_populacional2);

    printf("-> Digite o numero de pontos turisticos: \n");
    scanf("%d", &Numero_pontos_turisticos2);

    printf("-> Digite o numero da Area Km: \n");
    scanf("%f", &area_km2);

    printf("-> Digite o numero do pib: \n");
    scanf("%f", &pib2);

    densidade2 = (float) Numero_populacional2 / area_km2; // Calcula densidade populacional, forçando conversao do int pra float da variavel Numero_populacional  em seguida realizando o calculo e Guardando na variavel densidade
    pib_per_capita2 = pib2  / (float) Numero_populacional2; // Converti Numero_populacional de int para float para garantir precisão no cálculo,
    // obtendo assim o PIB per capita correto em reais por habitante

    super_poder2 = (float) Numero_populacional2 + area_km2 + pib2 + pib_per_capita2 + (area_km2 / (float) Numero_populacional2) + Numero_pontos_turisticos2; // Soma de todos atributos com o inverso de densidade (area_km2 / (float) Numero_populacional2) no final tudo e calculado e o valor e amazenado na variavel super_poder2

    printf(
        "_-_-_-_-_-_- Carta 2 _-_-_-_-_-_- \n"
        "- Estado: %s\n"
        "- Codigo da carta: %s\n"
        "- Cidade: %s\n"
        "- Numero Populacional: %ld\n"
        "- Numero de Pontos Turisticos: %d\n"
        "- Area: %.3f km2\n"
        "- PIB: R$ %.2f bilhões de reais\n"
        "- Densidade Populacional: %.2f hab/km²\n"
        "- PIB per Capita: R$ %.2f \n"
        "- Super Poder: %.2f \n",
        Estado2, Carta_codigo2, Cidade2, Numero_populacional2, Numero_pontos_turisticos2, area_km2, pib2, densidade2, pib_per_capita2,super_poder2
    );




    // Exibição da comparação das cartas
    printf("Comparação de cartas:\n");

    
    // Utilizando a estrutura de decissao if e else em comparaçao de atributos de ambas as cartas
    if(Numero_populacional1 > Numero_populacional2){
        printf("População (%ld) Carta 1 venceu!\n", Numero_populacional1);
    } else {
        printf("População (%d) Carta 2 venceu!\n", Numero_populacional2);
    }

    if(area_km1 > area_km2){
        printf("Área (%f) Carta 1 venceu!", area_km1);
    }else{

        printf("Área (%f) Carta 2 venceu!", area_km2);
    }

    if(pib1 > pib2){
        printf("PIB (%f) Carta 1 venceu!", pib1);
    }else{
        printf("PIB (%f) Carta 2 venceu!", pib2);
    }

    if (Numero_pontos_turisticos1 > Numero_pontos_turisticos2){
        printf("Pontos turisticos (%d) Carta 1 venceu!", Numero_pontos_turisticos1);
    }else{
        printf("Pontos turisticos (%d) Carta 2 venceu!", Numero_pontos_turisticos2);
    }

    // A Densidade menor vence
    if(densidade1 < densidade2){
        printf("Carta 1 venceu com a menor densidade populacional (%f)", densidade1);
    }else{
        printf("Carta 2 venceu com a menor densidade populacional (%f)", densidade2);
    }
    
    if (pib_per_capita1 > pib_per_capita2)
    {
        printf("PIB per capita Carta 1 vence! (%f)", pib_per_capita1);
    }else{
        printf("PIB per capita Carta 2 vence! (%f)", pib_per_capita2);
    }


    if (super_poder1 > super_poder2)
    {
        printf("Super Poder carta 1 venceu! (%f)", super_poder1);
    }
    else
    {
        printf("Super Poder carta 2 venceu! (%f)", super_poder2);
    }
    

    return 0;
}