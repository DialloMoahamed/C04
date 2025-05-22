#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, somme=0;
    float moyenne=0;
    int tab[n];
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &tab[i]);
        somme += tab[i];
    }
    moyenne = somme / n;
    printf("La moyenne est : %.1f", moyenne);    
    return 0;
}