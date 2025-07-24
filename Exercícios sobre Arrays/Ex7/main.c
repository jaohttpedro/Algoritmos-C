#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL)); // Inicializa o gerador de números aleatórios com a hora atual

    // Gera um número aleatório entre 1 e 10
    int numero_aleatorio = rand() % 10 + 1;

    // Mensagem inicial
    printf("Iniciando verificação de segurança...\n");
    printf("Por favor, aguarde enquanto verificamos seu sistema...\n");

    // Simulação de verificação de vírus
    printf("Verificando arquivos...\n");
    printf("Analisando registro do sistema...\n");
    printf("Escaneando por ameaças...\n");

    // Verifica se o número gerado é 7 (apenas para brincadeira)
    if (numero_aleatorio == 7) {
        printf("Atenção: Detectamos uma possível infecção no seu sistema!\n");
        printf("Foram encontradas atividades suspeitas nos arquivos do sistema.\n");
        printf("Para remoção dessas ameaças, recomendamos a atualização do seu antivírus.\n");
        printf("Se precisar de assistência, entre em contato com o suporte técnico.\n");
    } else {
        printf("Seu sistema está protegido contra ameaças! :)\n");
        printf("Não foram detectadas infecções ou atividades suspeitas.\n");
        printf("Mantenha seu antivírus e sistema operacional atualizados para maior segurança.\n");
    }

    return 0;
}






