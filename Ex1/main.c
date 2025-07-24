#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int num1,num2;
	int i;    
	
	printf("Digite um numero inteiro:");
	scanf("%d", &num1);
	printf("Digite um outro numero inteiro:");
	scanf("%d", &num2);
	
	int numA, numB;
	
	if (num1 >= 0 && num2>=0){
	if(num1>num2){
		numA = num1;
		numB = num2;
	} else{
		numA = num2;
		numB = num1;
	}
	
	for(i=numB; i<=numA;i++){
			printf("%d\n",i);
		}
	}
	
	else{
		if(num1<num2){
		numA = num2;
		numB = num1;
	} else{
		numA = num1;
		numB = num2;
	}
	
	for(i=numA; i>=numB;i--){
			printf("%d\n",i);
		}
	system("pause");
	}	
	return 0;
}
