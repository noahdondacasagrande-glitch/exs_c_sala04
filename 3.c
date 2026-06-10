#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");
    
    int i, numero;

    printf("Informe um número para a tabuada \n");
    scanf("%d", &numero);
    
    for(i =0; i <= numero;i++){
        printf("\n %d X %2d = %4d", i, 9, (i*9));
    }

    system("pause");
    return 0;
}
int mains(){
    int i;
    printf("Informe um número para a tabuada \n");
    for(i =0; i <= 10;i++){
        printf("\n %d X %2d = %4d", i, 9, (i*9));
    }

    system("pause");
    return 0;
}