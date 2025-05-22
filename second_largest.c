#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, max=0, max2=0;
    int tab[n];
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &tab[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (tab[i] > max)
        {
            max = tab[i];
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        if (tab[i] > max2 && tab[i] < max)
        {
            max2 = tab[i];
        }
        
    }
    
    printf("Le deuxième plus grand nombre est : %d",max2);
    
    return 0;
}
