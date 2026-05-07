#include <stdio.h>

int main(){
    int i, contador;
    float nota;
    contador = 0;

    for(i = 1; i <= 5; i++){
        printf("Digite a nota do %i aluno: ", i);
        scanf("%f", &nota);

        if(nota >= 60){
            contador++;
        }
    }

    printf("A quantidade de alunos contadors eh: %i\n", contador);

    return 0;
}