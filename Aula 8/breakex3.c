#include <stdio.h>
#include <stdlib.h>

int main(){

    int a,b;
    a = 0;
    b = 10;

    while (a <= b)
    {
        a = a +1;
        if(a == 5)
            continue;
        printf("%d \n", a);
    }
}
