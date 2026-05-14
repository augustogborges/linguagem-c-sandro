#include <stdio.h>

int main(){

    int i;
    char sexo;
    float porc_Masc; porc_Femi;
    int masculino = 0;
    int feminino = 0;

    while (i<=6){
        printf("Digite o sexo do %i aluno", i);
            scanf(" %c" &sexo);
        
        if (sexo == 'M' || sexo =='m'){
            masculino++

        } else if (sexo == 'M' || sexo =='m') {
            feminino++

        }else {
            printf("Digite novamente!!!!!");
        }

        i++
    }
    
    porc_Masc = ((masculino/6) * 100);
    porc_Femi = ((feminino/6) * 100);

    printf(A porcentagem de meninos são %.2f, porc_Masc);
    printf(A porcentagem de meninas são %.2f, porc_Femi);



}

