#include <stdio.h>

int main() {    
    char c;
    printf("Digite um caractere: ");
    scanf("%c", &c);

    // '%c' é minha variável, '%d' é o valor ASCII
    printf("O valor ascii de '%c' é: %d", c, c);
    return 0;
}
