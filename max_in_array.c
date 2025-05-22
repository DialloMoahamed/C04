#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, max=0;
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
    printf("Le maximum est : %d\n",max);
    
    return 0;
}
