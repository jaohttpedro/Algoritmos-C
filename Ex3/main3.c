#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int num,i;
    printf("Digite um numero inteiro qualquer: ");
    scanf("%d", &num);

    if (num >= 0) {
        for (i = 2; i <= num; i += 2) {
            printf("%d\n", i);
        }
    } else {
        for (i = -2; i >= num; i -= 2) {
            printf("%d\n", i);
        }
    }
	system("pause");
    return 0;
}

