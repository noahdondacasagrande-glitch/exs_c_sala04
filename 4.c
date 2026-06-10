#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");
    int i;
    printf("Informe um número para a tabuada \n");
    for(i =0; i <= 10;i++){
        printf("\n %d X %2d = %4d", i, 7, (i*7));
    }

    system("pause");
    return 0;
    


    system("pause");
    return 0;
}