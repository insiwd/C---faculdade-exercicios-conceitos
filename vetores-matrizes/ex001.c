// livraria 28/07/25
#include <stdio.h>

int main() {
    // matrizes
    char tituloLivro[3][101];
    char nomeAutor[3][51];

    // aqui se usa um array de inteiros
    int anoPublicacao[3];
    
    int i;
    char c;

    // entrada de dados
    for (i = 0; i < 3; i++) {
        printf("Digite o nome do livro %d: ", i + 1);
        fgets(tituloLivro[i], 100, stdin);
        
        printf("Digite o nome do autor: ");
        // uso o fgets para controlar o tamanho
        fgets(nomeAutor[i], 50, stdin);

        printf("Digite a data de publicação: ");

        // usa o scanf para aceitar inteiro, limpa o buffer depois
        scanf("%d", &anoPublicacao[i]);
        c = getchar();
        
        printf("\n");
    }

    // mostrar dados
    for (i = 0; i < 3; i++) {
        printf("Livro: %s \t Autor: %s \t Ano: %d\n", tituloLivro[i], nomeAutor[i], anoPublicacao[i]);
    }

    return 0;
}