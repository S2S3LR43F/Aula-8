#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    int i, numero, maior, menor;
    setlocale(LC_ALL, "Portuguese");
    printf("Insira um valor: ");
    scanf("%d", &numero);
    maior = numero;
    menor = numero;

    for(i=0; i<4; i++){
        printf("Insira um valor: ");
        scanf("%d", &numero);
       if (numero > maior){
         maior = numero;
       }
         else if (numero < menor){
          menor = numero;

        }
        }

    printf("Maior = %d\n", maior);
    printf("Menor = %d\n", menor);
    system("pause");
    return(0);
}
