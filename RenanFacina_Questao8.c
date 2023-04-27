#include <stdio.h>

int main()
{
    int a923; 
    int b923;
    int c923;
    
    int *pa923;
    int *pb923;
    int *pc923;
    
    printf("Questão 8\n");

    printf("Digite 3 números inteiros:\n");
    scanf("%d %d %d", &a923, &b923, &c923);

    pa923 = &a923;
    pb923 = &b923;
    pc923 = &c923;

    if (*pa923 > *pb923)
    {
        int temp923 = *pa923;
        *pa923 = *pb923;
        *pb923 = temp923;
    }

    if (*pb923 > *pc923)
    {
        int temp923 = *pb923;
        *pb923 = *pc923;
        *pc923 = temp923;
        
        if (*pa923 > *pb923)
        {
            int temp923 = *pa923;
            *pa923 = *pb923;
            *pb923 = temp923;
        }
    }

    printf("Números em ordem crescente: %d, %d, %d\n", *pa923, *pb923, *pc923);
    printf("Endereços de memória: %p, %p, %p\n", &pa923, &pb923, &pc923);

    return 0;
}
