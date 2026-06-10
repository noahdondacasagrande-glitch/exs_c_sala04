#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");
    
    char cidade[50];
    char estado[50];
    int ano;
    int resp;

    printf("digite sua cidade");
    fgets(cidade, 50, stdin);

    printf("digite sua estado");
    fgets(estado, 50, stdin);

    printf("ano de nascimento");
    scanf(" %d", &ano);

    resp = 2026 - ano;

    printf("a cidade de %s, no estado do(a) %s tem %d anos", cidade, estado, resp);


    system("pause");
    return 0;
}