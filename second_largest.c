#include <stdio.h>

// Ce script permet de déterminer le deuxième plus grand nombre d’un tableau

int main(void)
{
    // Initialisation des variables
    int n, max=0, max2=0;
    //Saisie et récupération de la valeurs du nombre d'élement entré par l'utilisateur
    scanf("%d", &n);
    int tab[n];

    // Boucle pour la saisie et la récupération des différente élements du tableau 
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &tab[i]);
    }
    // Boucle et condition pour trouver le nombre le plus grand parmi les élement du tableau
    for (int i = 0; i < n; i++)
    {
        if (tab[i] > max)
        {
            max = tab[i];
        }
        
    }
    // Boucle et condition pour trouver le deuxième nombre le plus grand parmi les élement du tableau
    for (int i = 0; i < n; i++)
    {
        if (tab[i] > max2 && tab[i] < max)
        {
            max2 = tab[i];
        }
        
    }

    // Affichage 
    printf("Le deuxième plus grand nombre est : %d", max2);
    
    return 0;
}
