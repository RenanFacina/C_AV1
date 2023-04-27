#include <stdio.h>

int main()
{
    int numero923 = 0;
    
    printf("Questão 2\n");
    
    printf("Digite um número positivo:\n");
    scanf("%i", &numero923);
    
    if(numero923 < 1)
    {
        printf("Número Inválido!");
    }
    else
    {
       for (int i923 = numero923; i923 >= 1; i923--)
        {
            if (i923 % 2 != 0)
            {
                printf("O número %i é impar\n", i923);
            }
        } 
    }

    return 0;
}
