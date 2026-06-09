#include<stdio.h>
#include<stdlib.h>
int main(){

    float numero1, numero2, resp;

    printf("digite o primeiro numero:");
    scanf("%f",  &numero1);  
    
    printf("digite o segundo numero:");
    scanf("%f",  &numero2);  

    if (numero1 == 0 || numero2 == 0 )
    {
        printf("não se divide por 0");
    }else{
        resp = numero1 / numero2;
        printf("%.2f", resp);
    }
    

    system("pause");
    return 0;
}
