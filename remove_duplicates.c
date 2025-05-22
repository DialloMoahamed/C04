#include <stdio.h>

// Ce script permet de supprimer les doublons d’un tableau et afficher le résultat

int main(void)
{
    // Initialisation des variables
    int n;
    //Saisie et récupération de la valeurs du nombre d'élement entré par l'utilisateur
    scanf("%d", &n);
    int T[n];

    // Boucle pour la saisie et la récupération des différente élements du tableau
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &T[i]);
    }

    // Boucle imbriquée et condition pour la vérification et la suppression des doublons 
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
    // Affichage après suppression des doublons
    printf("Après suppression des doublons : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", T[i]);
    }
    printf("\n");
    return 0;
}
