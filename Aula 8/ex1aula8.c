#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    //vari�veis
    int numero, i=1, soma=0;

    printf("Insira %d� valor: ", i);
    scanf("%d", &numero);
    soma = soma + numero;

while (numero != 0) {
    i++;
     printf("Insira %d� valor: ", i);
    scanf("%d", &numero);
    soma += numero;
}
 printf("Soma = %d \n", soma);
 system("pause");
 return 0;



 }



