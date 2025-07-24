#include <stdio.h>
#include <string.h>

// Função recursiva para inverter a string
void inverteStringRecursiva(char abc[], int inicio, int fim) {
    if (inicio >= fim) {
        return;
    }
    
    // Troca os caracteres nas posições 'inicio' e 'fim'
    char aux = abc[inicio];
    abc[inicio] = abc[fim];
    abc[fim] = aux;
    
    // Chama recursivamente para os próximos caracteres
    inverteStringRecursiva(abc, inicio + 1, fim - 1);
}

int main() {
    char palavra[10] = "ABACATE";
    int tam = strlen(palavra);
    inverteStringRecursiva(palavra, 0, tam - 1);
    printf("%s\n", palavra);

    return 0;
}
