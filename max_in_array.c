#include <stdio.h>

// Ce script permet de lire les éléments d’un tableau et afficher le plus grand

int main(int argc, char const *argv[])
{
    // Initialisation des variables
    int n, max=0;
    int tab[n];
    //Saisie et récupération de la valeurs du nombre d'élement entré par l'utilisateur
    scanf("%d", &n);

    // Boucle pour la saisie et la récupération des différente élements du tableau 
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &tab[i]);
    }
    for (int i = 0; i < n; i++)
    {
        // Condition pour trouver le plus grand des élements du tableau
        if (tab[i] > max)
        {
            max = tab[i];
        }
        
    }
    // Affichage
    printf("Le maximum est : %d\n",max);
    
    return 0;
}
