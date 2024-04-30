#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    int i, n, numero, cont_par=0, soma_par=0, cont_imp=0, soma_imp=0;
    setlocale(LC_ALL, "Portuguese");
    printf("Insira o valor do número de repetições: ");
    scanf("%d", &n);

     for(i=0; i<n; i++){
        printf("Insira um valor");
        scanf("%d", &n);

    if(numero%2 == 0){
        cont_par++;
        soma_par = soma_par + i;

        }
    else{
        cont_imp++;
        soma_imp = soma_imp + i;
    }
}

    printf("Quantidade dos pares %d \n", cont_par);
    printf("Quantidade dos impares %d \n", cont_imp);
    printf("Soma dos pares %d \n", cont_par);
    printf("Quantidade dos impares %d \n", cont_imp);

    system("pause");
    return 0;
}

