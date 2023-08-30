#include <stdio.h>
int main(){
    int idade;
    printf("Qual é a sua idade?");
    scanf("%d",&idade);
    switch(idade){
        case 0 ... 17:
        printf("Novo");
        break;
        case 18 ... 99:
        printf("Está registrado");
        break;
        default:
        printf("Erro");

    }
    return 0;
}