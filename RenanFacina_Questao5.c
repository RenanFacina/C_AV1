#include <stdio.h>

int fmaior923(int vetor[3])
{
    int maior923 = vetor[0];
    for (int i923 = 0; i923 < 3; i923++)
    {
        if (vetor[i923] > maior923)
        {
            maior923 = vetor[i923];
        }
    }
    
    return maior923;
}

int fmenor923(int vetor[3])
{
    int menor923 = vetor[0];
    for (int i923 = 0; i923 < 3; i923++)
    {
        if (vetor[i923] < menor923)
        {
            menor923 = vetor[i923];
        }
    }
    
    return menor923;
}

int main()
{
    int idades923[3];
    int maior923;
    int menor923;
    
    printf("Questão 5\n");

    
    for (int i923 = 0; i923 < 3; i923++)
    {
        printf("Digite a idade da %iª pessoa\n", i923+1);
        scanf("%i", &idades923[i923]);
    }
    
    maior923 = fmaior923(idades923);
    menor923 = fmenor923(idades923);
    
    printf("Maior idade: %i\n", maior923);
    printf("Menor idade: %i\n", menor923);


    return 0;
}