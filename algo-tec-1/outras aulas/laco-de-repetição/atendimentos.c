#include <stdio.h>

int main()
{
    int i = 1;
    int maior_10 = 0;
    float porc_10;
    int atendimentos;
    
    
    while(i<=5){
        printf("Digite o tanto de cliente que o %i atendente atendeu: ", i);
            scanf("%i", &atendimentos);
        i++;
        
        if(atendimentos>10){
            maior_10++;
        }
    }
    
    porc_10 = ((maior_10 * 100) / 5);
    
    printf("%.2f%% fizeram mais que 10 atendimentos", porc_10);
    printf("%i", i);
    
    return 0;
}