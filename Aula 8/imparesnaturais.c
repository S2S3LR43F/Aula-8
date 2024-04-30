#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int n, i, numero=1;
    printf("Insira o valor de n: ");
    scanf("%d", &n);

    for (i = 0; i<n; i++){

    printf("%d \n", numero);
    numero = numero + 2;

}
 system("pause");
 return 0;
}
