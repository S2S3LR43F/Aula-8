#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    int i, numero, maior;
    setlocale(LC_ALL, "Portuguese");
    printf("Insira o valor do número: ");
        scanf("%d", &maior);

    do{
        printf("Insira o valor do número: ");
        scanf("%d", &numero);

        if (numero > maior)
            maior = numero;

    }while (numero != 0);

        printf("Maior = %d\n", maior);

    system("pause");
    return(0);
}

