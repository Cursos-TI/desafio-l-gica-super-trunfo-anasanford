#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    //definição das variáveis:
    int atributo, resultadoComparacao, populacao1, pontosTuristicos1, populacao2, pontosTuristicos2;
    float area1, pib1, area2, pib2;
    char opcao, estado1, cidade1[20], codigo1[5], estado2, cidade2[20], codigo2[5];

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
        printf("Insira as informações abaixo conforme solicitado:\n");

        //obtenção de informações da primeira carta
        printf("- Primeira carta! -\n");
        printf("Digite o nome da primeira cidade: ");
        printf("%s", cidade1);
        printf("Digite o código do Estado (A-H): ");
        scanf("%c", &estado1);
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
        printf("%s", cidade2);
        printf("Digite o código do Estado (A-H): ");
        scanf("%c", &estado2);
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

        //menu de comparação dos atributos das cartas:
        /printf(" \n-- COMPARANDO AS CARTAS! -- \n");
        printf("Escolha abaixo qual atributo você deseja comparar!\n");
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Pontos Turísticos\n");
        printf("Digite o número do atributo: ");
        scanf("%d", &atributo);

        //comparação entre as cartas:
        switch(atributo) {
        case 1:
            //comparação da população
            printf("Você escolheu a opção POPULAÇÃO:\n");
            printf("População %s: %d habitantes\n", cidade1, populacao1);
            printf("População %s: %d habitantes\n", cidade2, populacao2);
            resultadoComparacao = populacao1 > populacao2 ? 1 : 0;
        break;
        case 2:
            //comparação da área
            printf("Você escolheu a opção ÁREA: \n");
            printf("Área %s: %.3f km2\n");
            resultadoComparacao = area1 > area2 ? 1 : 0;
        break;
        case 3:
            //comparação do pib
            printf("Você escolheu a opção PIB: \n");
            resultadoComparacao = pib1 > pib2 ? 1 : 0;
        break;
        case 4:
            //comparação de pontos turísticos
            printf("Você escolheu a opção PONTOS TURÍSTICOS: \n");
            resultadoComparacao = pontosTuristicos1 > pontosTuristicos2 ? 1 : 0;
        break;
        default:
            printf("Opção de atributo inválida!\n");
        break;
        }

    break;
    case 'R':
    case 'r':
        //regras do jogo
        printf("-- REGRAS: --\n");
        printf("# Inicialmente, o jogador deve inserir as informações de cada carta;\n");
        printf("# Em seguida, o jogador deve escolher qual propriedade deseja para comparação entre as cartas; \n");
        printf("# Ganha a carta no qual sua propredade tem maior valor!\n");
    break;
    case 'S':
    case 's':
        //saída do jogo
        printf("Saindo do jogo...\n");
        printf("Obrigado e até a próxima! :)\n");
    break;
    default:
        printf("Opção inválida!\n");
    break;
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
