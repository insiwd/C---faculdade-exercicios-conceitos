// livraria 28/07/25
// refeito em 06/08/25, utilizando Structs!
#include <stdio.h>

struct Livro {
    char tituloLivro[100];
    char nomeAutor[50];
    int anoPublicacao;
};

int main() {
    // matrizes
    // char tituloLivro[3][101];
    // char nomeAutor[3][51];

    // // aqui se usa um array de inteiros
    // int anoPublicacao[3];
    
    int i;
    char c;

    // struct do tipo livro!
    struct Livro biblioteca[3];

    // entrada de dados
    for (i = 0; i < 3; i++) {
        printf("Digite o título do livro %d: ", i + 1);
        // fgets(tituloLivro[i], 100, stdin);

        // acessando o índice I e o campo de título do struct
        scanf("%s", biblioteca[i].tituloLivro);
        
        printf("Digite o nome do autor: ");
        // uso o fgets para controlar o tamanho
        // fgets(nomeAutor[i], 50, stdin);
        scanf("%s", biblioteca[i].nomeAutor);

        // a data é uma variável int, então é necessário o &
        printf("Digite a data de publicação: ");
        scanf("%d", &biblioteca[i].anoPublicacao);        

        // usa o scanf para aceitar inteiro, limpa o buffer depois
        // scanf("%d", &anoPublicacao[i]);
        // c = getchar();
        
        printf("\n");
    }

    // mostrar dados
    for (i = 0; i < 3; i++) {
        printf("Livro: %s \t Autor: %s \t Ano: %d\n", biblioteca[i].tituloLivro, biblioteca[i].nomeAutor, biblioteca[i].anoPublicacao);
    }

    return 0;
}