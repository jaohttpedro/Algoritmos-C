#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*Crie um programa na linguagem C contendo um struct com as seguintes informações: nome, idade,
endereço de uma pessoa. Solicite um número inteiro N do usuário. Em seguida aloque um array de tamanho
N desse tipo struct. Ao final, peça ao usuário digitar os dados desse array.*/

typedef struct 
{
   char rua[30];
   int numero;
   char bairro[15];
} Endereco;


typedef struct
{
  char nome[15];
  int idade;
  Endereco endereco;
} Pessoa;

int main(){

    int n;

    printf("Digite quantos usuarios quer cadastar: ");
    scanf("%d", &n);

    if(n<=0){
        printf("Erro: quantidade invalida \n");
        return 1;
    }
    
    Pessoa *arrayUsers = (Pessoa*) malloc (n * sizeof(Pessoa));

    if (arrayUsers == NULL){
        printf("Erro na alocacao da memoria\n");
        return 1;
    }

    int i;

    for(i=0; i<n;i++){
       
        printf("Digite o nome do usuario %d:", i+1);
        scanf(" %[^\n]", arrayUsers[i].nome);

        printf("Digite a idade do usuario:");
        scanf("%d",&arrayUsers[i].idade);

        printf("Digite o endereco do usuario:\n");
        printf("Rua: ");
        scanf(" %[^\n]", arrayUsers[i].endereco.rua);
        printf("Numero: ");
        scanf("%d", &arrayUsers[i].endereco.numero);
        getchar();
        printf("Bairro: ");
        scanf(" %[^\n]", arrayUsers[i].endereco.bairro);
         printf("===============================================================\n");

    }

    for(i=0; i<n;i++){
        printf("Usuario %d\n", i+1);
        printf("Nome: %s\n", arrayUsers[i].nome);
        printf("Idade: %d\n", arrayUsers[i].idade);
        printf("Endereco: Rua %s, numero %d, bairro %s\n", arrayUsers[i].endereco.rua,arrayUsers[i].endereco.numero, arrayUsers[i].endereco.bairro);
        printf("===============================================================\n");

    }
    
    free(arrayUsers);

return 0;
}