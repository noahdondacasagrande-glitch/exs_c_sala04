#include<stdio.h>
#include<stdlib.h>
int main(){

    char nome[50];
    printf("digite o seu nome: ");
    // scanf("%s", nome);
    fgets(nome, 50, stdin);
    printf("o nome informado foi: %s \n", nome);

    
    system("pause");
    return 0;
}