#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    int T[n];
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &T[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (T[j] == T[i])
            {
                for (int k = j; k < n; k++)
                {
                    T[k] = T[k + 1];
                }
                n--;
            }
            else
            {
                j++;
            }
            
        }
        
    }
    
    printf("Après suppression des doublons : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", T[i]);
    }
    
    
    return 0;
}
