#include <stdio.h>

// Ce script permet de trier un tableau d’entiers par ordre croissant

int main(int argc, char const *argv[])
{
    // Initialisation des variables
    int n, c;
    int tableau[n];
    //Saisie et récupération de la valeurs du nombre d'élement entré par l'utilisateur
    scanf("%d", &n);

    // Boucle pour la saisie et la récupération des différente élements du tableau 
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &tableau[i]);
    }
    // Boucle imbriquée et condition pour trier les élements du tableau par ordre croissant
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
    // Affichage du tableau trier
    printf("Tableau trié : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", tableau[i]);
    }
    printf("\n");
    
    
    return 0;
}
