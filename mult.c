#include<stdio.h>
#include<stdlib.h>
int main(){

    float numero1, numero2, resp;

    printf("digite o primeiro numero:");
    scanf("%f",  &numero1);  
    
    printf("digite o segundo numero:");
    scanf("%f",  &numero2);  

    resp = numero1 * numero2;
    printf("%f",resp);

    system("pause");
    return 0;
}
