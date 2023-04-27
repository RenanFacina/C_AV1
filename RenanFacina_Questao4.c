#include <stdio.h>

int dobrar923(int n923)
{
    return 2 * n923;
}

int somar923(int a923, int b923)
{
    return a923 + b923;
}

int triplicar923(int n923)
{
    return 3 * n923;
}

int main() {
    int n1_923;
    int n2_923;
    int resultado_923;
    
    printf("Questão 4\n");

    printf("Digite o primeiro numero:\n");
    scanf("%i", &n1_923);

    printf("Digite o segundo numero:\n");
    scanf("%i", &n2_923);

    resultado_923 = triplicar923(somar923(dobrar923(n1_923), dobrar923(n2_923)));

    printf("O dobro do primeiro número é: %i\n", dobrar923(n1_923));
    printf("O dobro do segundo número é: %i\n", dobrar923(n2_923));
    printf("O resultado da soma triplicado é: %i\n", resultado_923);

    return 0;
}