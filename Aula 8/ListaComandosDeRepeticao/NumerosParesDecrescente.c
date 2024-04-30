#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int n, i, numero=1;
    printf("Insira o valor de n: ");
    scanf("%d", &n);

    for (i = n; i>=0; i--){

    if (i%2 == 0)
    printf("%d \n", i);

    }



    system("pause");
    return 0;
}
