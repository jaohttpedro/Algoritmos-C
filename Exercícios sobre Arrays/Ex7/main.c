#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL)); // Inicializa o gerador de n�meros aleat�rios com a hora atual

    // Gera um n�mero aleat�rio entre 1 e 10
    int numero_aleatorio = rand() % 10 + 1;

    // Mensagem inicial
    printf("Iniciando verifica��o de seguran�a...\n");
    printf("Por favor, aguarde enquanto verificamos seu sistema...\n");

    // Simula��o de verifica��o de v�rus
    printf("Verificando arquivos...\n");
    printf("Analisando registro do sistema...\n");
    printf("Escaneando por amea�as...\n");

    // Verifica se o n�mero gerado � 7 (apenas para brincadeira)
    if (numero_aleatorio == 7) {
        printf("Aten��o: Detectamos uma poss�vel infec��o no seu sistema!\n");
        printf("Foram encontradas atividades suspeitas nos arquivos do sistema.\n");
        printf("Para remo��o dessas amea�as, recomendamos a atualiza��o do seu antiv�rus.\n");
        printf("Se precisar de assist�ncia, entre em contato com o suporte t�cnico.\n");
    } else {
        printf("Seu sistema est� protegido contra amea�as! :)\n");
        printf("N�o foram detectadas infec��es ou atividades suspeitas.\n");
        printf("Mantenha seu antiv�rus e sistema operacional atualizados para maior seguran�a.\n");
    }

    return 0;
}






