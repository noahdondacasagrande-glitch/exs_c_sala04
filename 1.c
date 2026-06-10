#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");
    int n;
    printf("digite um numero: ");
    scanf(" %f", &n);
    if (n<45)
    {
        printf("        //\n");
        printf("       //\n");
        printf("      ||\n");
        printf("      ||\n");
        printf("      ||\n");
        printf("     /  \\\n");
        printf("    / oo \\\n");
        printf("   (  --  )\n");
        printf("    \\____/\n");
        printf("      ||\n");
        printf("   ___||___\n");
        printf("  /   ||   \\\n");
        printf(" /____||____\\\n");
        printf("     /  \\\n");
        printf("    /    \\\n");
    }else{
        printf("           __\n");
        printf("      _.-''  '-._\n");
        printf("   .-'  _   _    '-.\n");
        printf("  /    (.) (.)      \\\n");
        printf(" |         >         |\n");
        printf(" |      \\_____/      |\n");
        printf("  \\      /\\_/\\      /\n");
        printf("   '-.__/     \\__.-'\n");
        printf("      /|  ___  |\\\n");
        printf("     /_|_|   |_|_\\\n");
        printf("       /_/   \\_\\\n");
    }
    
    


    system("pause");
    return 0;
}