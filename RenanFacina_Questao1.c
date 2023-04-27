#include <stdio.h>

int main()
{
    float compra923 = 0;
    float desconto923 = 0;
    float valor_final923 = 0;
    
    printf("Questão 1\n");
    
    printf("Digite o valor da compra:\n");
    scanf("%f", &compra923);
    
    if (compra923 <= 5000.00)
    {
        desconto923 = (compra923 * 12) / 100;
        valor_final923 = compra923 - desconto923;
    }
    else if (compra923 > 5000.00 && compra923 <= 8000.00)
    {
        desconto923 = (compra923 * 7) / 100;
        valor_final923 = compra923 - desconto923;
    }
    else if (compra923 > 8000.00 && compra923 <= 10000.00)
    {
        desconto923 = (compra923 * 4) / 100;
        valor_final923 = compra923 - desconto923;
    }
    else if (compra923 > 10000.00)
    {
        desconto923 = (compra923 * 3) / 100;
        valor_final923 = compra923 - desconto923;
    }
    
    printf("O desconto do produto é de R$%.2f\n", desconto923);
    printf("valor final do produto é de R$%.2f\n", valor_final923);

    return 0;
}
