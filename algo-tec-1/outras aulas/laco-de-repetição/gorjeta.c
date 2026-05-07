#include <stdio.h>

int main() {

    int i,deram_gorjeta;
    float valor_conta, valor_pago;
    deram_gorjeta = 0;
    for(i = 1; i <= 5; i++) {

        printf("Digite o valor da %ia conta R$ ", i);
        scanf("%f", &valor_conta);

        printf("Digite o valor pago pelo cliente na %ia conta R$ ", i);
        scanf("%f", &valor_pago);

        if(valor_pago > valor_conta) {
            deram_gorjeta++;
        }
    }
        printf("o numero de pessoa que pagou gorjeta foi de %i \n", deram_gorjeta);


    return 0;
}