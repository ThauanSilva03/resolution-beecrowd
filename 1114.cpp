#include<stdio.h>

int main(){
    int senha = 2002;
    int teste;
    while(teste != senha){
        scanf("%d",&teste);
        if(teste != senha){
            printf("Senha Invalida\n");
        }else{
            printf("Acesso Permitido\n");
        }
    }
    return 0;
}
