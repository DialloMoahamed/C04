#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, c;
    int tableau[n];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &tableau[i]);
    }
    
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (tableau[i] > tableau[j])
            {
                c = tableau[i];
                tableau[i] = tableau[j];
                tableau[j] = c;
            }
            
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        printf("Tableau trié : %d ", tableau[i]);
    }
    printf("\n");
    
    
    return 0;
}
