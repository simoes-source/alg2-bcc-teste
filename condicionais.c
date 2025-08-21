#include <stdio.h>

int main(){

    int idade;

    printf("Digite a idade:");
    scanf("%d",&idade);
    
    if(idade > 0){
        if (idade  >= 18){

            printf("Você pode votar!\n");

        }

        else{
            printf("Você não pode votar!\n");
        }


        if(idade >= 60){
            printf("Você é senior...\n");

        }


        else if(idade >= 18){
            printf("Você é adulto!\n");

        }

        else{
            printf("Você é uma criança!\n");

        }
    }
    else{
        printf("Valor inválido\n");
    }
    return 0 ;
}