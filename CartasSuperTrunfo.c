#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    //DECLARANDO VARIAVEIS
    char NomPais[50];
    char SigEstado;
    char CodCidade[2];
    char NomCidade[50];
    int PopCidade;
    float AreCidade;
    float PibCidade;
    int PntCidade;

    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    //SOLICITANDO ENTRADA DE INFORMAÇÕES POR PARTE DO USUÁRIO PARA CADASTRO DAS CARTAS
    printf("Informe o nome do País que deseja cadastrar: ");
    scanf("%s", &NomPais);

    printf("Informe o sigla equivalente ao estado que deseja cadastrar valores entre A a H: ");
    scanf("%c", &SigEstado);

    printf("Informe o código da cidade sendo ele (01, 02, 03 ou 04): ");
    scanf("%s", &CodCidade);

    printf("Informe o nome da cidade: ");
    scanf("%s", &NomCidade);

    printf("Informe a quantidade populacional da cidade de %s: ", NomCidade);
    scanf("%d", &PopCidade);

    printf("Informe a área da cidadede %s: ", NomCidade);
    scanf("%f", &AreCidade);

    printf("Informe o PIB da cidade de %s: ", NomCidade);
    scanf("%f", &PibCidade);

    printf("Informa a quantidade de pontos trísticos da cidade de %s: ", NomCidade);
    scanf("%d", PntCidade);

    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
