#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    int T[n];

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
    printf("\n");
    return 0;
}
