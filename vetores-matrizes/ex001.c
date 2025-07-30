// livraria 28/07/25
#include <stdio.h>

int main() {
    char livros[3][100];
    char autor[3][49];
    int anoPublicacao[3];
    
    int i, escolha;
    char c;

    // entrada de dados
    for (i = 0; i < 3; i++) {
        printf("Digite o nome do livro %d: ", i + 1);
        fgets(livros[i], 100, stdin);

        printf("Digite o nome do autor: ");
        scanf("%s", &autor[i]);
        c = getchar();

        printf("Digite a data de publicação: ");
        scanf("%d", &anoPublicacao[i]);
        c = getchar();

        printf("\n");
    }

    // mostrar dados
    for (i = 0; i < 3; i++) {
        printf("Livro: %s \t Autor: %s \t Ano: %d\n", livros[i], autor[i], anoPublicacao[i]);
    }

    return 0;
}