#include <stdio.h>

int main() {
    //definição das variáveis dos atributos das cidades:
    int populacao1, pontosTuristicos1, populacao2, pontosTuristicos2;
    float area1, pib1, densidadePopulacional1, pibPerCapta1, area2, pib2, densidadePopulacional2, pibPerCapta2;
    char estado1, cidade1[20], codigo1[5], estado2, cidade2[20], codigo2[5];

    //definição das variáveis das comparações e dos menus:
    int atributo1, atributo2, resultadoComparacao;
    float soma1, soma2;
    char opcao;

    //menu inicial:
    printf("Bem-vindo(a) ao SUPER TRUNFO!\n");
    printf("-- Menu Inicial --\n");
    printf("I. Iniciar Jogo\n");
    printf("R. Ver Regras\n");
    printf("S. Sair do Jogo\n");
    printf("Escolha uma opção: ");
    scanf("%c", &opcao);
    
    switch (opcao) {
    case 'I':
    case 'i':
        //início do jogo
        printf("-- NOVA PARTIDA! --\n");
        printf("Insira as informações abaixo conforme solicitado: \n");

        //obtenção de informações da primeira carta
        printf("- Primeira carta! -\n");
        printf("Digite o nome da primeira cidade: ");
        scanf("%s", cidade1);
        printf("Digite o código do Estado (A-H): ");
        scanf(" %c", &estado1);
        printf("Digite o código da carta: ");
        scanf("%s", codigo1);
        printf("Digite a população da cidade (valor total): ");
        scanf("%d", &populacao1);
        printf("Digite a área da cidade (em km2): ");
        scanf("%f", &area1);
        printf("Digite o PIB da cidade (em milhões de reais): ");
        scanf("%f", &pib1);
        printf("Digite o número de pontos turísticos: ");
        scanf("%d", &pontosTuristicos1);

        //obtenção de informações da segunda carta:
        printf("- Segunda carta! -\n");
        printf("Digite o nome da segunda cidade: ");
        scanf("%s", cidade2);
        printf("Digite o código do Estado (A-H): ");
        scanf(" %c", &estado2);
        printf("Digite o código da carta: ");
        scanf("%s", codigo2);
        printf("Digite a população da cidade (valor total): ");
        scanf("%d", &populacao2);
        printf("Digite a área da cidade (em km2): ");
        scanf("%f", &area2);
        printf("Digite o PIB da cidade (em milhões de reais): ");
        scanf("%f", &pib2);
        printf("Digite o número de pontos turísticos: ");
        scanf("%d", &pontosTuristicos2);

        //cálculo da densidade populacional
        densidadePopulacional1 = populacao1 / area1;
        densidadePopulacional2 = populacao2 / area2;

        //cálculo do PIB per capta
        pibPerCapta1 = (pib1 * 100) / populacao1;
        pibPerCapta2 = (pib2 * 100) / populacao2;

        //menu de comparação dos atributos das cartas:
        printf(" \n-- COMPARANDO AS CARTAS! -- \n");
        printf("Escolha abaixo dois atributos você deseja realizar a comparação!\n");
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Pontos Turísticos\n");
        printf("5. Densidade Populacional\n");
        printf("6. PIB per capta\n");
        printf("Digite o primeiro atributo desejado: ");
        scanf("%d", &atributo1);
        printf("Digite o segundo atributo desejado: ");
        scanf("%d", &atributo2);
        printf("-----------------\n");

        //comparação entre as cartas:
        switch(atributo1) {
        case 1: //comparação população X demais atributos
            if (atributo2 == 1) {
                printf("Opção inválida! Você deve escolher dois atributos diferentes para comparação!\n");
            } else if (atributo2 == 2) {
                printf("Você escolheu as opções POPULAÇÃO e ÁREA:\n");
                printf("%s - População: %d habitantes - Área: %.2f km2 \n", cidade1, populacao1, area1);
                printf("%s - População: %d habitantes - Área: %.2f km2 \n", cidade2, populacao2, area2);
                soma1 = populacao1 + area1;
                soma2 = populacao2 + area2;
                resultadoComparacao = soma1 > soma2 ? 1 : 0;
            } else if (atributo2 == 3) {
                printf("Você escolheu as opções POPULAÇÃO e PIB:\n");
                printf("%s - População: %d habitantes - PIB: %.3f milhões de reais \n", cidade1, populacao1, pib1);
                printf("%s - População: %d habitantes - PIB: %.3f milhões de reais \n", cidade2, populacao2, pib2);
                soma1 = populacao1 + pib1;
                soma2 = populacao2 + pib1;
                resultadoComparacao = soma1 > soma2 ? 1 : 0;
            } else if (atributo2 == 4) {
                printf("Você escolheu as opções POPULAÇÃO e PONTOS TURÍSTICOS:\n");
                printf("%s - População: %d habitantes - Pontos Turísticos: %d pontos \n", cidade1, populacao1, pontosTuristicos1);
                printf("%s - População: %d habitantes - Pontos Turísticos: %d pontos \n", cidade2, populacao2, pontosTuristicos2);
                soma1 = populacao1 + pontosTuristicos1;
                soma2 = populacao2 + pontosTuristicos2;
                resultadoComparacao = soma1 > soma2 ? 1 : 0;
            } else if (atributo2 == 5) {
                printf("Você escolheu as opções POPULAÇÃO e DENSIDADE POPULACIONAL:\n");
                printf("%s - População: %d habitantes - Densidade Populacional: %.0f habitantes/km2 \n", cidade1, populacao1, densidadePopulacional1);
                printf("%s - População: %d habitantes - Densidade Populacional: %.0f habitantes/km2 \n", cidade2, populacao2, densidadePopulacional2);
                soma1 = populacao1 + densidadePopulacional1;
                soma2 = populacao2 + densidadePopulacional2;
                resultadoComparacao = soma1 > soma2 ? 1 : 0;
            } else if (atributo2 == 6) {
                printf("Você escolheu as opções POPULAÇÃO e PIB PER CAPTA:\n");
                printf("%s - População: %d habitantes - PIB per capta: %.3f mil reais/habitantes \n", cidade1, populacao1, pibPerCapta1);
                printf("%s - População: %d habitantes - PIB per capta: %.3f mil reais/habitantes \n", cidade2, populacao2, pibPerCapta2);
                soma1 = populacao1 + pibPerCapta1;
                soma2 = populacao2 + pibPerCapta2;
                resultadoComparacao = soma1 > soma2 ? 1 : 0;
            } else {
                printf("Opção de atributo 2 inválida!\n");
            }
        break;
        case 2: //comparação área X demais atributos
            if (atributo2 == 1) {
                printf("Você escolheu as opções ÁREA e POPULAÇÃO: \n");
                printf("%s - Área: %.2f km2 - População: %d \n", cidade1, area1, populacao1);
                printf("%s - Área: %.2f km2 - População: %d \n", cidade2, area2, populacao2);
                soma1 = area1 + populacao1;
                soma2 = area2 + populacao2;
                resultadoComparacao = soma1 > soma2 ? 1 : 0;
            } else if (atributo2 == 2) {
                printf("Opção inválida! Você deve escolher dois atributos diferentes para comparação!\n");
            } else if (atributo2 == 3) {
                printf("Você escolheu as opções ÁREA e PIB: \n");
                printf("%s - Área: %.2f km2 - PIB: %.3f milhões de reais \n", cidade1, area1, pib1);
                printf("%s - Área: %.2f km2 - PIB: %.3f milhões de reais \n", cidade2, area2, pib2);
                soma1 = area1 + pib1;
                soma2 = area2 + pib2;
                resultadoComparacao = soma1 > soma2 ? 1 : 0;
            } else if (atributo2 == 4) {
                printf("Você escolheu as opções ÁREA e PONTOS TURÍSTICOS: \n");
                printf("%s - Área: %.2f km2 - Pontos Turísticos: %d \n", cidade1, area1, pontosTuristicos1);
                printf("%s - Área: %.2f km2 - Pontos Turísticos: %d \n", cidade2, area2, pontosTuristicos2);
                soma1 = area1 + pontosTuristicos1;
                soma2 = area2 + pontosTuristicos2;
                resultadoComparacao = soma1 > soma2 ? 1 : 0;
            } else if (atributo2 == 5) {
                printf("Você escolheu as opções ÁREA e DENSIDADE POPULACIONAL: \n");
                printf("%s - Área: %.2f km2 - Densidade Populacional: %.0f habitantes/km2 \n", cidade1, area1, densidadePopulacional1);
                printf("%s - Área: %.2f km2 - Densidade Populacional: %.0f habitantes/km2 \n", cidade2, area2, densidadePopulacional2);
                soma1 = area1 + densidadePopulacional1;
                soma2 = area2 + densidadePopulacional2;
                resultadoComparacao = soma1 > soma2 ? 1 : 0;
            } else if (atributo2 == 6) {
                printf("Você escolheu as opções ÁREA e PIB PER CAPTA: \n");
                printf("%s - Área: %.2f km2 - PIB per capta: %.3f mil reais/habitantes \n", cidade1, area1, pibPerCapta1);
                printf("%s - Área: %.2f km2 - PIB per capta: %.3f mil reais/habitantes \n", cidade2, area2, pibPerCapta2);
                soma1 = area1 + pibPerCapta1;
                soma2 = area2 + pibPerCapta2;
                resultadoComparacao = soma1 > soma2 ? 1 : 0;
            } else {
                printf("Opção de atributo 2 inválida!\n");
            }
        break;
        case 3: //comparação PIB X demais atributos
            if(atributo2 == 1) {
                printf("Você escolheu as opções PIB e POPULAÇÃO: \n");
                printf("%s - PIB: %.3f milhões - População: %d habitantes\n", cidade1, pib1, populacao1);
                printf("%s - PIB: %.3f milhões - População: %d habitantes\n", cidade2, pib2, populacao2);
                soma1 = pib1 + populacao1;
                soma2 = pib2 + populacao2;
                resultadoComparacao = soma1 > soma2 ? 1 : 0;
            } else if (atributo2 == 2) {
                printf("Você escolheu as opções PIB e ÁREA: \n");
                printf("%s - PIB: %.3f milhões - Área: %.3f km2\n", cidade1, pib1, area1);
                printf("%s - PIB: %.3f milhões - Área: %.3f km2\n", cidade2, pib2, area2);
                soma1 = pib1 + area1;
                soma2 = pib2 + area2;
                resultadoComparacao = soma1 > soma2 ? 1 : 0;
            } else if (atributo2 == 3) {
                printf("Opção inválida! Você deve escolher dois atributos diferentes para comparação!\n");
            } else if (atributo2 == 4) {
                printf("Você escolheu as opções PIB e PONTOS TURÍSTICOS: \n");
                printf("%s - PIB: %.3f milhões - Pontos Turísticos: %d pontos \n", cidade1, pib1, pontosTuristicos1);
                printf("%s - PIB: %.3f milhões - Pontos Turísticos: %d pontos \n", cidade2, pib2, pontosTuristicos2);
                soma1 = pib1 + pontosTuristicos1;
                soma2 = pib2 + pontosTuristicos2;
                resultadoComparacao = soma1 > soma2 ? 1 : 0;
            } else if (atributo2 == 5) {
                printf("Você escolheu as opções PIB e DENSIDADE POPULACIONAL: \n");
                printf("%s - PIB: %.3f milhões - Densidade Populacional: %.0f habitantes/km2 \n", cidade1, pib1, densidadePopulacional1);
                printf("%s - PIB: %.3f milhões - Densidade Populacional: %.0f habitantes/km2 \n", cidade2, pib2, densidadePopulacional2);
                soma1 = pib1 + densidadePopulacional1;
                soma2 = pib2 + densidadePopulacional2;
                resultadoComparacao = soma1 > soma2 ? 1 : 0;
            } else if (atributo2 == 6) {
                printf("Você escolheu as opções PIB e PIB PER CAPTA: \n");
                printf("%s - PIB: %.3f milhões - PIB per capta: %.3f mil reais/habitantes\n", cidade1, pib1, pibPerCapta1);
                printf("%s - PIB: %.3f milhões - PIB per capta: %.3f mil reais/habitantes\n", cidade2, pib2, pibPerCapta2);
                soma1 = pib1 + pibPerCapta1;
                soma2 = pib2 + pibPerCapta2;
                resultadoComparacao = soma1 > soma2 ? 1 : 0;
            } else {
                printf("Opção de atributo 2 inválida!\n");
            }
            
        break;
        case 4: //comparação pontos turísticos X demais atributos
            if (atributo2 == 1) {
                printf("Você escolheu as opções PONTOS TURÍSTICOS e POPULAÇÃO: \n");
                printf("%s - Pontos Turísticos: %d pontos - População: %d habitantes \n", cidade1, pontosTuristicos1, populacao1);
                printf("%s - Pontos Turísticos: %d pontos - População: %d habitantes \n", cidade2, pontosTuristicos2, populacao2);
                soma1 = pontosTuristicos1 + populacao1;
                soma2 = pontosTuristicos2 + populacao2;
                resultadoComparacao = soma1 > soma2 ? 1 : 0;
            } else if (atributo2 == 2) {
                printf("Você escolheu as opções PONTOS TURÍSTICOS e ÁREA: \n");
                printf("%s - Pontos Turísticos: %d pontos - Área: %.2f km2 \n", cidade1, pontosTuristicos1, area1);
                printf("%s - Pontos Turísticos: %d pontos - Área: %.2f km2 \n", cidade2, pontosTuristicos2, area2);
                soma1 = pontosTuristicos1 + area1;
                soma2 = pontosTuristicos2 + area2;
                resultadoComparacao = soma1 > soma2 ? 1 : 0;
            } else if (atributo2 == 3) {
                printf("Você escolheu as opções PONTOS TURÍSTICOS e PIB: \n");
                printf("%s - Pontos Turísticos: %d pontos - PIB: %.3f milhões de reais \n", cidade1, pontosTuristicos1, pib1);
                printf("%s - Pontos Turísticos: %d pontos - PIB: %.3f milhões de reais \n", cidade2, pontosTuristicos2, pib2);
                soma1 = pontosTuristicos1 + pib1;
                soma2 = pontosTuristicos2 + pib2;
                resultadoComparacao = soma1 > soma2 ? 1 : 0;
            } else if (atributo2 == 4) {
                printf("Opção inválida! Você deve escolher dois atributos diferentes para comparação!\n");
            } else if (atributo2 == 5) {
                printf("Você escolheu as opções PONTOS TURÍSTICOS e DENSIDADE POPULACIONAL: \n");
                printf("%s - Pontos Turísticos: %d pontos - Densidade Populacional: %.0f habitantes/km2 \n", cidade1, pontosTuristicos1, densidadePopulacional1);
                printf("%s - Pontos Turísticos: %d pontos - Densidade Populacional: %.0f habitantes/km2 \n", cidade2, pontosTuristicos2, densidadePopulacional2);
                soma1 = pontosTuristicos1 + densidadePopulacional1;
                soma2 = pontosTuristicos2 + densidadePopulacional2;
                resultadoComparacao = soma1 > soma2 ? 1 : 0;
            } else if (atributo2 == 6) {
                printf("Você escolheu as opções PONTOS TURÍSTICOS e PIB PER CAPTA: \n");
                printf("%s - Pontos Turísticos: %d pontos - PIB per capta: %.3f mil reais/habitantes \n", cidade1, pontosTuristicos1, pibPerCapta1);
                printf("%s - Pontos Turísticos: %d pontos - PIB per capta: %.3f mil reais/habitantes \n", cidade2, pontosTuristicos2, pibPerCapta2);
                soma1 = pontosTuristicos1 + pibPerCapta1;
                soma2 = pontosTuristicos2 + pibPerCapta2;
                resultadoComparacao = soma1 > soma2 ? 1 : 0;
            } else {
                printf("Opção de atributo 2 inválida!\n");
            }
        break;
        case 5: //comparação densidade populacional X demais atributos
            if (atributo2 == 1) {
                printf("Você escolheu as opções DENSIDADE POPULACIONAL e POPULAÇÃO: \n");
                printf("%s - Densidade Populacional: %.0f habitantes/km2 - População: %d habitantes \n", cidade1, densidadePopulacional1, populacao1);
                printf("%s - Densidade Populacional: %.0f habitantes/km2 - População: %d habitantes \n", cidade2, densidadePopulacional2, populacao2);
                soma1 = densidadePopulacional1 + populacao1;
                soma2 = densidadePopulacional2 + populacao2;
                resultadoComparacao = soma1 > soma2 ? 1 : 0;
            } else if (atributo2 == 2) {
                printf("Você escolheu as opções DENSIDADE POPULACIONAL e ÁREA: \n");
                printf("%s - Densidade Populacional: %.0f habitantes/km2 - Área: %.2f km2 \n", cidade1, densidadePopulacional1, area1);
                printf("%s - Densidade Populacional: %.0f habitantes/km2 - Área: %.2f km2 \n", cidade2, densidadePopulacional2, area2);
                soma1 = densidadePopulacional1 + area1;
                soma2 = densidadePopulacional2 + area2;
                resultadoComparacao = soma1 > soma2 ? 1 : 0;
            } else if (atributo2 == 3) {
                printf("Você escolheu as opções DENSIDADE POPULACIONAL e PIB: \n");
                printf("%s - Densidade Populacional: %.0f habitantes/km2 - PIB: %.3f milhões de reais \n", cidade1, densidadePopulacional1, pib1);
                printf("%s - Densidade Populacional: %.0f habitantes/km2 - PIB: %.3f milhões de reais \n", cidade2, densidadePopulacional2, pib2);
                soma1 = densidadePopulacional1 + pib1;
                soma2 = densidadePopulacional2 + pib2;
                resultadoComparacao = soma1 > soma2 ? 1 : 0;
            } else if (atributo2 == 4) {
                printf("Você escolheu as opções DENSIDADE POPULACIONAL e PONTOS TURÍSTICOS: \n");
                printf("%s - Densidade Populacional: %.0f habitantes/km2 - Pontos Turísticos: %d pontos \n", cidade1, densidadePopulacional1, pontosTuristicos1);
                printf("%s - Densidade Populacional: %.0f habitantes/km2 - Pontos Turísticos: %d pontos \n", cidade2, densidadePopulacional2, pontosTuristicos2);
                soma1 = densidadePopulacional1 + pontosTuristicos1;
                soma2 = densidadePopulacional2 + pontosTuristicos2;
                resultadoComparacao = soma1 > soma2 ? 1 : 0;
            } else if (atributo2 == 5) {
                printf("Opção inválida! Você deve escolher dois atributos diferentes para comparação!\n");
            } else if (atributo2 == 6) {
                printf("Você escolheu as opções DENSIDADE POPULACIONAL e PIB PER CAPTA: \n");
                printf("%s - Densidade Populacional: %.0f habitantes/km2 - PIB per capta: %.3f mil reais/habitantes \n", cidade1, densidadePopulacional1, pibPerCapta1);
                printf("%s - Densidade Populacional: %.0f habitantes/km2 - PIB per capta: %.3f mil reais/habitantes \n", cidade2, densidadePopulacional2, pibPerCapta2);
                soma1 = densidadePopulacional1 + pibPerCapta1;
                soma2 = densidadePopulacional2 + pibPerCapta2;
                resultadoComparacao = soma1 > soma2 ? 1 : 0;
            } else {
                printf("Opção de atributo 2 inválida!\n");
            }
        break;
        case 6: //comparação PIB per capta X demais atributos
            if (atributo2 == 1) {
                printf("Você escolheu as opções PIB PER CAPTA e POPULAÇÃO: \n");
                printf("%s - PIB per capta: %.3f mil reais/habitantes - População: %d habitantes \n", cidade1, pibPerCapta1, populacao1);
                printf("%s - PIB per capta: %.3f mil reais/habitantes - População: %d habitantes \n", cidade2, pibPerCapta2, populacao2);
                soma1 = pibPerCapta1 + populacao1;
                soma2 = pibPerCapta2 + populacao2;
                resultadoComparacao = soma1 > soma2 ? 1 : 0;
            } else if (atributo2 == 2) {
                printf("Você escolheu as opções PIB PER CAPTA e ÁREA: \n");
                printf("%s - PIB per capta: %.3f mil reais/habitantes - Área: %.2f km2 \n", cidade1, pibPerCapta1, area1);
                printf("%s - PIB per capta: %.3f mil reais/habitantes - Área: %.2f km2 \n", cidade2, pibPerCapta2, area2);
                soma1 = pibPerCapta1 + area1;
                soma2 = pibPerCapta2 + area2;
            } else if (atributo2 == 3) {
                printf("Você escolheu as opções PIB PER CAPTA e PIB: \n");
                printf("%s - PIB per capta: %.3f mil reais/habitantes - PIB: %.3f milhões de reais \n", cidade1, pibPerCapta1, pib1);
                printf("%s - PIB per capta: %.3f mil reais/habitantes - PIB: %.3f milhões de reais \n", cidade2, pibPerCapta2, pib2);
                soma1 = pibPerCapta1 + pib1;
                soma2 = pibPerCapta2 + pib2;
            } else if (atributo2 == 4) {
                printf("Você escolheu as opções PIB PER CAPTA e PONTOS TURÍSTICOS: \n");
                printf("%s - PIB per capta: %.3f mil reais/habitantes - Pontos Turísticos: %d pontos \n", cidade1, pibPerCapta1, pontosTuristicos1);
                printf("%s - PIB per capta: %.3f mil reais/habitantes - Pontos turísticos: %d pontos \n", cidade2, pibPerCapta2, pontosTuristicos2);
                soma1 = pibPerCapta1 + pontosTuristicos1;
                soma2 = pibPerCapta2 + pontosTuristicos2;
            } else if (atributo2 == 5) {
                printf("Você escolheu as opções PIB PER CAPTA e DENSIDADE POPULACIONAL: \n");
                printf("%s - PIB per capta: %.3f mil reais/habitantes - Densidade Populacional: %.0f habitantes/km2 \n", cidade1, pibPerCapta1, densidadePopulacional1);
                printf("%s - PIB per capta: %.3f mil reais/habitantes - Densidade Populacional: %.0f habitantes/km2 \n", cidade2, pibPerCapta2, densidadePopulacional2);
                soma1 = pibPerCapta1 + densidadePopulacional1;
                soma2 = pibPerCapta2 + densidadePopulacional2;
            } else if (atributo2 == 6) {
                printf("Opção inválida! Você deve escolher dois atributos diferentes para comparação!\n");
            } else {
                printf("Opção de atributo 2 inválida!\n");
            }
        break;
        default:
            printf("Opção de atributo 1 inválida!\n");
        break;
        }

        //definindo um vencedor:
        if (resultadoComparacao == 1) {
            printf("--- PONTUAÇÃO ---\n");
            printf("%s = %.3f pontos\n", cidade1, soma1);
            printf("%s = %.3f pontos\n", cidade2, soma2);
            printf("A cidade vencedora é... %s!\n PARABÉNS!\n", cidade1);
        } else {
            printf("--- PONTUAÇÃO ---\n");
            printf("%s = %.3f pontos\n", cidade1, soma1);
            printf("%s = %.3f pontos\n", cidade2, soma2);
            printf("A cidade vencedora é... %s!\nPARABÉNS!\n", cidade2);
        }

    break;
    case 'R':
    case 'r':
        //regras do jogo
        printf("-- REGRAS: --\n");
        printf("# Inicialmente, o jogador deve inserir as informações de cada carta;\n");
        printf("# Em seguida, o jogador deve escolher duas propriedade que deseja comparar; \n");
        printf("# A pontuação é feita pela soma dos valores das duas propriedades selecionadas; \n");
        printf("# Ganha a carta no qual a pontuação for maior!\n");
        printf("# Boa sorte!\n");
        printf("---------------\n");
    break;
    case 'S':
    case 's':
        //saída do jogo
        printf("Saindo do jogo...\n");
        printf("Obrigada e até a próxima! :)\n");
    break;
    default:
        printf("Opção inválida!\n");
    break;
    }

    return 0;
}
