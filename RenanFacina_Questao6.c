#include <stdio.h>

int fmaior923(int vetor[4])
{
    int nota_maior923 = vetor[0];
    for (int i923 = 0; i923 < 4; i923++)
    {
        if (vetor[i923] > nota_maior923)
        {
            nota_maior923 = vetor[i923];
        }
    }
    
    return nota_maior923;
}

int fmenor923(int vetor[4])
{
    int nota_menor923 = vetor[0];
    for (int i923 = 0; i923 < 4; i923++)
    {
        if (vetor[i923] < nota_menor923)
        {
            nota_menor923 = vetor[i923];
        }
    }
    
    return nota_menor923;
}

int main()
{
    int notas923[4];
    int nota_maior923;
    int nota_menor923;
    
    printf("Questão 6\n");
    
    for (int i923 = 0; i923 < 4; i923++)
    {
        printf("Digite a nota do %i° aluno\n", i923+1);
        scanf("%i", &notas923[i923]);
    }
    
    nota_maior923 = fmaior923(notas923);
    nota_menor923 = fmenor923(notas923);
    
    printf("Maior nota: %i\n", nota_maior923);
    printf("Menor nota: %i\n", nota_menor923);


    return 0;
}