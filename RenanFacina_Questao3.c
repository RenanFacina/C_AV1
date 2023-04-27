#include <stdio.h>

int main()
{
    int notas923[10];
    
    int soma923;
    float media923;
    int maior923;
    int menor923;
    
    
    printf("Questão 3\n");
    
    for(int i923 = 0; i923 < 10; i923++)
    {
        printf("Digite a nota do aluno %i\n", i923+1);
        scanf("%i", &notas923[i923]);
    }
    
    maior923 = notas923[0];
    menor923 = notas923[0];
    
    for(int i923 = 0; i923 < 10; i923++)
    {
        if(notas923[i923] > maior923)
        {
            maior923 = notas923[i923];
        }
        else if(notas923[i923] < menor923)
        {
            menor923 = notas923[i923];
        }
        
        soma923 = soma923 + notas923[i923];
    }
    
    media923 = (float)soma923 / 10;
    
    printf("soma: %i\n", soma923);
    printf("média: %.2f\n", media923);
    printf("maior: %i\n", maior923);
    printf("menor: %i\n", menor923);
}
