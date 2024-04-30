#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int n, i, soma=0;
    printf("Insira o valor de n: ");
    scanf("%d", &n);

    for (i = 0; i<n; i++){
            soma = soma + i;
    }
    printf("Soma = %d\n", soma);

    system("pause");
    return 0;
}
