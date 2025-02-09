#include <stdio.h>

int main() {
    int aposta, n1, n2, n3, n4, n5, n6, n7;
    // Lê o valor da aposta e os números escolhidos pelo usuário
    scanf("%d", &aposta);
    scanf("%d %d %d %d %d %d %d", &n1, &n2, &n3, &n4, &n5, &n6, &n7);

    // Define os números do sorteio oficial
    int sorteio[] = {11, 29, 3, 45, 63, 20, 33};

    int acertos = 0;
    // Verifica quantos números o usuário acertou
    for (int i = 0; i < 7; i++) {
        if (n1 == sorteio[i] || n2 == sorteio[i] || n3 == sorteio[i] ||
            n4 == sorteio[i] || n5 == sorteio[i] || n6 == sorteio[i] || n7 == sorteio[i]) {
            acertos++;
        }
    }

    float lucro = 0.0;
    // Calcula o lucro com base na quantidade de acertos
    if (acertos >= 3 && acertos <= 4) {
        lucro = 1331.0 - aposta;
    } else if (acertos >= 5 && acertos <= 6) {
        lucro = 20736.0 - aposta;
    } else if (acertos == 7) {
        lucro = 100000.0 - aposta;
    }

    // Divide o lucro entre Xamaile e Joao Gabriel
    float xamaile = 0.6 * lucro;
    float joao = 0.4 * lucro;

    // Exibe a quantidade de acertos
    printf("Quantidade de acertos: %d\n", acertos);
    
    // Exibe o lucro e a divisão do prêmio ou a mensagem de não premiação
    if (acertos <= 1) {
        printf("Não obtém prêmio.\n");
    } else {
        printf("Lucro: %.2f\n", lucro);
        printf("Valor de Xamaile: %.2f\n", xamaile);
        printf("Valor de Joao Gabriel: %.2f\n", joao);
    }

    return 0;
}
