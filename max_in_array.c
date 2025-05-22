#include <stdio.h>

int main(int argc, char const *argv[])
{
    int tab[5] = {2, 8, 3, 5, 1};
    int max = tab[0];

    for (int i = 0; i < 5; i++)
    {
        if (tab[i] > max)
        {
            max = tab[i];
        }
        
    }
    
    printf("Le maximum est : %d", max);
    return 0;
}
