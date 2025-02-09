#include <stdio.h>
#include <string.h>

#define MAX_VENDAS 10  // Define o número máximo de registros de venda
#define MAX_NOME 41    // Define o tamanho máximo para o nome do cliente
#define MAX_CIDADE 31  // Define o tamanho máximo para o nome da cidade

// Define a estrutura para armazenar dados de uma venda
typedef struct {
    char cliente[MAX_NOME];  // Nome do cliente
    int qtdprod;             // Quantidade de produtos vendidos
    float valortotal;        // Valor total da venda
    char destino[MAX_CIDADE]; // Cidade destino da venda
} Venda;

int main() {
    Venda vendas[MAX_VENDAS]; // Array para armazenar as vendas
    int cont_vendas = 0;      // Contador de vendas registradas
    float total_valorvendas = 0; // Soma dos valores totais de todas as vendas
    int total_qtdprodutos = 0; // Soma da quantidade de produtos vendidos
    float maiorvenda = 0;      // Valor da maior venda
    char cliente_maiorvenda[MAX_NOME] = ""; // Nome do cliente com a maior venda
    char cidade_maiorvenda[MAX_CIDADE] = ""; // Cidade da maior venda

    // Loop para ler dados de vendas até atingir o máximo permitido
    while (cont_vendas < MAX_VENDAS) {
        scanf(" %[^\n]%*c", vendas[cont_vendas].cliente); // Lê o nome do cliente

        // Encerra a leitura se a entrada for "encerrar"
        if (strcmp(vendas[cont_vendas].cliente, "encerrar") == 0) {
            break;
        }

        scanf("%d", &vendas[cont_vendas].qtdprod); // Lê a quantidade de produtos

        scanf("%f", &vendas[cont_vendas].valortotal); // Lê o valor total da venda

        scanf(" %[^\n]%*c", vendas[cont_vendas].destino); // Lê a cidade destino

        // Atualiza a maior venda, o cliente e a cidade se necessário
        if (vendas[cont_vendas].valortotal > maiorvenda) {
            maiorvenda = vendas[cont_vendas].valortotal;
            strcpy(cliente_maiorvenda, vendas[cont_vendas].cliente);
            strcpy(cidade_maiorvenda, vendas[cont_vendas].destino);
        }

        // Acumula o total de valor de vendas e a quantidade de produtos vendidos
        total_valorvendas += vendas[cont_vendas].valortotal;
        total_qtdprodutos += vendas[cont_vendas].qtdprod;

        cont_vendas++; // Incrementa o contador de vendas
    }

    // Exibe a quantidade total de produtos vendidos e o valor total arrecadado
    printf("Quantidade vendida: %d\n", total_qtdprodutos);
    printf("Valor arrecadado: %.2f\n", total_valorvendas);
    // Exibe o cliente e a cidade da maior venda, ou informa que não houve vendas
    if (cont_vendas > 0) {
        printf("%s\n", cliente_maiorvenda);
        printf("%s\n", cidade_maiorvenda);
    } else {
        printf("Nenhuma venda registrada.\n");
    }

    return 0;
}
