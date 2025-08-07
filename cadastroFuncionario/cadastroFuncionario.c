#include <stdio.h>

int main() {
    char funcionarios[5];
    char nomeFuncionario[5][50];
    char cargoFuncionario[5][30];

    int i;
    char c;

    for (i = 0; i < 5; i++) {
        printf("Digite o nome do %do funcionário(a): ", i + 1);
        fgets(nomeFuncionario[i], 50, stdin);

        
        printf("Digite o cargo do %do funcionário(a): ", i + 1);
        fgets(cargoFuncionario[i], 30, stdin);
        printf("\n");

        if (cargoFuncionario[i] )
    }

    for (i = 0; i < 5; i++) {
        printf("Nome: %s\n Cargo: %s", nomeFuncionario[i], cargoFuncionario[i]);
        if (cargoFuncionario[i] == cargoFuncionario[i]) {
            printf("Existem funcionários com o mesmo cargo! ");
        }
    }

}