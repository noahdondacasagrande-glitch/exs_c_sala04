//inluclui a bibiblioteca stdio.h que permite usar a entrada e saida de infos(printf e scanf)
#include<stdio.h>
//incluir bibilotecas utilitarias (system())
#include<stdlib.h>
int main(){

    //declarar variaveis
    float numero1, numero2, resp;

    printf("digite o primeiro numero:");
    scanf("%f",  &numero1);  
    
    printf("digite o segundo numero:");
    scanf("%f",  &numero2);  

    resp = numero1 + numero2;
    printf("%f",resp);

    //pausar o sistema ate que o usuario pressione uma tecla
    system("pause");
    //finaliza o sistema se tudo ocorreu bem 
    return 0;
}
