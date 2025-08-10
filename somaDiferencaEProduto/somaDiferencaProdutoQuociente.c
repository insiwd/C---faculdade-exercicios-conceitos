#include <stdio.h>

int main() {
    int numeroum, numerodois, soma, diferenca, produto, quociente;
    
    printf("digite um número inteiro: ");
    scanf("%d", &numeroum);
    printf("digite outro número inteiro: ");
    scanf("%d", &numerodois);

    //soma
    soma = numeroum + numerodois;
    //diferença
    if (numeroum > numerodois) {
        diferenca = numeroum - numerodois;
    } else {
        diferenca = numerodois - numeroum;
    }
    //produto
    produto = numeroum * numerodois;
    // quociente
    quociente  = numeroum % numerodois;

    printf("\n");
    printf("a soma dos dois números é: %d\n", soma);
    printf("a diferença entre os dois números é: %d\n", diferenca);
    printf("o produto entre dos dois números é: %d\n", produto);
    printf("o quociente entre dos dois números é: %d\n", quociente);
}