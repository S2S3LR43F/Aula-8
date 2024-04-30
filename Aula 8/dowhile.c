#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
    int i=1;

    do{
        if (i%4 == 0){
        printf("Pin \n");
    }
    else
        printf("%d \n", i);
    i++;
    } while (i <= 40);

    system("pause");
    return 0;
}
