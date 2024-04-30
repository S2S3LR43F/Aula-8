#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
    int i;
    do
    {
        printf("Escolha uma opcao: \n");
        printf("(1) Opcao 1\n");
        printf("(2) Opcao 2\n");
        scanf("%d", &i);
    }
    while ((i < 1) || (i > 2));
    printf ("Voce escolheu a Opcao %d. \n", i);
    system("pause");
    return 0;

}
