#include <stdio.h>

int main(){
    int i, posicao;
    float consumo, km;
    consumo = 0;
    for(i = 1; i <= 5; i++){
        printf("Digite a media do %i carro: ", i);
        scanf("%f", &km);

        if(km > consumo){
            consumo = km;
            posicao = i;
        }
    }

    printf("Maior km é %.2f e esta na posição %i\n", consumo,posicao);

    return 0;
}