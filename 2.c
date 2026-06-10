#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");
    int n =0 , i;
    printf("digite um numero entao irei fazer uma piramide: ");
    scanf(" %f", &n);
    for(i= 0; i >= n ;i++){
        printf("*");
    }
    

    system("pause");
    return 0;
}