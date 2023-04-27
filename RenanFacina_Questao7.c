#include <stdio.h>

int main()
{
    int vetor923[12];
    int pares923[6];
    int impares923[6];
    
    int i923 = 0;
    int cont_par923 = 0;
    int cont_impar923 = 0;
    
    printf("Questão 7\n");

    for(i923 = 0; i923 < 12; i923++)
    {
        printf("Digite o %i° número inteiro\n", i923+1);
        scanf("%i", &vetor923[i923]);
    }
    
    for(i923 = 0; i923 < 12; i923++)
    {
        if (vetor923[i923] % 2 == 0)
        {
            pares923[cont_par923] = vetor923[i923];
            cont_par923++;
        }
        else
        {
            impares923[cont_impar923] = vetor923[i923];
            cont_impar923++;
        }
    }
    
    printf("\nNúmeros pares:\n");
    for (i923 = 0; i923 < cont_par923; i923++)
    {
        printf("%i\n", pares923[i923]);
    }
    
    printf("\nNúmeros ímpares:\n");
    for (i923 = 0; i923 < cont_impar923; i923++)
    {
        printf("%i\n", impares923[i923]);
    }

    return 0;
}