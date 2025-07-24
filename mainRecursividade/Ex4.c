#include <stdio.h>
#include <string.h>
/*Escreva uma função recursiva que calcule a soma dos primeiros n cubos:
S = 1^3 + 2^3 + ... + n^3
*/

int somaCubo(int cubo){
    if(cubo == 1){
        return 1;
    }
    else{
        return somaCubo(cubo-1)+cubo*cubo*cubo;
    }

}

int main(){
    int n;
    printf("Diga um numero para calcular: ");
    scanf("%d", &n);
    int resultado = somaCubo(n);
    printf("A soma dos primeiros n=%d cubos = %d", n,resultado);
}