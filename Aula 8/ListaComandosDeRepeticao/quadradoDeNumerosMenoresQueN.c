#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int n, i, quadrado;
    printf("Insira o valor de n: ");
    scanf("%d", &n);

    for (i = 1; i<=n; i++){
    quadrado = i*i;
    printf("%d \n", quadrado);

 }



    system("pause");
    return 0;
}
