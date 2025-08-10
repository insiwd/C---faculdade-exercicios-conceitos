// 06/08/25

#include <stdio.h>
#include <string.h>

// todo funcionário tem cargo e nome
struct Funcionario {
    char nome[50];
    char cargo[30];
};

int main() {
    // char funcionarios[5];
    struct Funcionario funcionarios[5];

    int repetido = 0;

    for (int i = 0; i < 5; i++) {
        printf("Digite o nome do %do funcionário(a): ", i + 1);
        scanf("%s", funcionarios[i].nome);

        printf("Digite o cargo do %do funcionário(a): ", i + 1);
        scanf("%s", funcionarios[i].cargo);
        printf("\n");
    }

    for (int i = 0; i < 5; i++) {
        // começamos J à frente de i 
        for (int j = i + 1; j < 5; j++) {
            int comparacao = strcmp(funcionarios[i].cargo, funcionarios[j].cargo);
            if (comparacao == 0) {
                repetido++;
                printf("Nome: %s Cargo: %s\n",funcionarios[j].nome, funcionarios[j].cargo);
                printf("Funcionários com o mesmo cargo:\n Nome: %s \n Cargo: %s", funcionarios[i].nome, funcionarios[i].cargo);
            }
            else {
                printf("nome: %s cargo: %s\n", funcionarios[i].nome, funcionarios[i].cargo);
            }
        }
    }
}