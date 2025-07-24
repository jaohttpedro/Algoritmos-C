#include <stdio.h>
#include <stdlib.h>

int main() {
    int opc;
    int codigo, qtd;
    float total = 0, mouse = 0, teclado = 0, monitor = 0, impressora = 0;
    float desmouse = 10, desteclado = 10, desmonitor = 10, desimpressora = 10;

    do {
        printf("\nMENU:\n");
        printf("1-Sair\n");
        printf("2-Vender produto\n");
        printf("3-Definir descontos da promoção Black Friday\n");
        printf("4-Imprimir descontos dos produtos\n");
        printf("5-Mostrar a quantia vendida por cada produto em reais\n");
        printf("DIGITE AQUI A OPCAO DESEJADA:");
        scanf("%d", &opc);

        switch (opc) {
            case 1:
                printf("\nFechando...Obrigado por usar nosso programa...");
                break;
            case 2:
                printf("\nDigite aqui o codigo do produto desejado:");
                scanf("%d", &codigo);
                printf("Com o produto escolhido, qual sera a quantidade desejada?");
                scanf("%d", &qtd);
                switch (codigo) {
                    case 1000:
                        mouse += qtd * 19.90;
                        printf("\nVoce esta comprando %d mouse, o total a pagar sera de %.2f.\n Se deseja comprar mais algum item digite 2 novamente no menu inicial", qtd, mouse);
                        break;
                    case 1001:
                        teclado += qtd * 100.00;
                        printf("\nVoce esta comprando %d teclado, o total a pagar sera de %.2f.\n Se deseja comprar mais algum item digite 2 novamente no menu inicial", qtd, teclado);
                        break;
                    case 1002:
                        monitor += qtd * 999.99;
                        printf("\nVoce esta comprando %d monitor, o total a pagar sera de %.2f.\n Se deseja comprar mais algum item digite 2 novamente no menu inicial", qtd, monitor);
                        break;
                    case 1003:
                        impressora += qtd * 1500.00;
                        printf("\nVoce esta comprando %d impressora, o total a pagar sera de %.2f.\n Se deseja comprar mais algum item digite 2 novamente no menu inicial", qtd, impressora);
                        break;
                }
                break;
            case 3:
                printf("\nDigite aqui o codigo do produto desejado:");
                scanf("%d", &codigo);
                char sn;
                switch (codigo) {
                    case 1000:
                        printf("Deseja manter o desconto de 10%%? S / N\n");
                        scanf(" %c", &sn);
                        if (sn == 'n' || sn == 'N') {
                            printf("Digite a nova porcentagem de desconto: ");
                            scanf("%f", &desmouse);
                        }
                        break;
                    case 1001:
                        printf("Deseja manter o desconto de 10%%? S / N\n");
                        scanf(" %c", &sn);
                        if (sn == 'n' || sn == 'N') {
                            printf("Digite a nova porcentagem de desconto: ");
                            scanf("%f", &desteclado);
                        }
                        break;
                    case 1002:
                        printf("Deseja manter o desconto de 10%%? S / N\n");
                        scanf(" %c", &sn);
                        if (sn == 'n' || sn == 'N') {
                            printf("Digite a nova porcentagem de desconto: ");
                            scanf("%f", &desmonitor);
                        }
                        break;
                    case 1003:
                        printf("Deseja manter o desconto de 10%%? S / N\n");
                        scanf(" %c", &sn);
                        if (sn == 'n' || sn == 'N') {
                            printf("Digite a nova porcentagem de desconto: ");
                            scanf("%f", &desimpressora);
                        }
                        break;
                }
                break;
            case 4:
                printf("\nO desconto dos mouses foi de %.2f %%\n", desmouse);
                printf("O desconto dos teclados foi de %.2f %%\n", desteclado);
                printf("O desconto dos monitores foi de %.2f %%\n", desmonitor);
                printf("O desconto das impressoras foi de %.2f %%\n", desimpressora);
                break;
        }
    } while (opc != 1);

    return 0;
}

