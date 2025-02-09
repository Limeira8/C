#include <stdio.h>

// Função que desenha uma pirâmide de altura 'h'
void piramide(int h) {
    // Laço para cada nível da pirâmide, de 1 até a altura 'h'
    for (int i = 1; i <= h; i++) {
        int e = h - i; // Calcula quantos espaços '.' são necessários antes do '*'
        int a = (i - 1) * 2 + 1; // Calcula quantos caracteres '-' são necessários entre os '*'
        
        // Imprime os espaços antes da parte visível da pirâmide
        for (int j = 0; j < e; j++) {
            printf(".");
        }
        
        // Imprime o primeiro '*' de cada linha
        printf("*");
        
        // Imprime os caracteres '-' no meio dos '*' se i > 1
        for (int j = 0; j < a - 2; j++) {
            printf("-");
        }
        
        // Imprime o segundo '*' da linha, se não for a primeira linha
        if (i > 1) {
            printf("*");
        }
        
        // Imprime os espaços após a parte visível da pirâmide
        for (int j = 0; j < e; j++) {
            printf(".");
        }
        
        // Quebra de linha para a próxima linha da pirâmide
        printf("\n");
    }
}

int main() {
    int h; // Variável para armazenar a altura da pirâmide

    // Lê a altura da pirâmide do usuário
    scanf("%d", &h);

    // Chama a função 'piramide' com a altura lida
    piramide(h);

    return 0;
}
