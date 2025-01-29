#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Definindo a estrutura das cartas
typedef struct {
    char nome;
    int populacao;
    int area;
    int PIB;
    int densidade;
} Carta;
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Função para criar uma carta
Carta criarCarta(char nome[10], int populacao, int area, int PIB, int densidade) {
    Carta c;
    strcpy(c.nome, nome);
    c.População = populacao;
    c.Area = area;
    c.PIB = PIB;
    c.densidade = densidade;
    return c;
}

// Função para exibir uma carta
void exibirCarta(Carta c) {
    printf("Nome: %s\n", c.nome);
    printf("populaçao: %d\n", c.Populacao);
    printf("area: %d\n", c.Area);
    printf("PIB: %d\n", c.PIB);
    printf("densidade: %d\n", c.densidade)
}

int main() {
    // Criando algumas cartas do pais Tailandia
    Carta A01 = criarCarta("Nakhon Ratchasima", 2581244, 20494, 0, 124);
    Carta A02 = criarCarta("Chiang Mai", 1595855, 20107, 0, 74);
    Carta A03 = criarCarta("Kanchanaburi", 801836, 19483, 0, 37);
    Carta A04 = criarCarta("Tak", 486146, 16406, 0, 29);
    Carta A05 = criarCarta("Ubon Ratchathani", 1691441, 15744, 0, 107);
    Carta A06 = criarCarta("Surat Thani", 1012064, 12891, 0, 67);
    Carta A07 = criarCarta("Chaiyaphum", 1095360, 12778, 0, 85);               
    Carta A08 = criarCarta("Mae Hong Son", 210537, 12681, 0, 16);
    // Exibindo as cartas 
    printf("Tailandia:\n");
    exibirCarta(A01);
    printf("\nTailandia:\n");
    exibirCarta(A02);
    printf("\nTailandia:\n");
    exibirCarta(A03);
    printf("\nTailandia:\n");
    exibirCarta(A04);
    printf("\nTailandia:\n");
    exibirCarta(A05);
    printf("\nTailandia:\n");
    exibirCarta(A06);
    printf("\nTailandia:\n");
    exibirCarta(A07);
    printf("\nTailandia:\n");
    exibirCarta(A08);

    return 0;
    // Siga os comentários para implementar cada parte do desafio.
    //Teste larissa
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

