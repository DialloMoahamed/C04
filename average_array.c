#include <stdio.h>

// Ce script permet de lire un tableau d’entiers et calculer leur moyenne

int main(int argc, char const *argv[])
{
    // Initialisation des variables
    int n, somme=0;
    float moyenne=0;
    int tab[n];
    //Saisie et récupération de la valeurs du nombre d'élement entré par l'utilisateur
    scanf("%d", &n);

    // Boucle pour la saisie et la récupération des différente élements du tableau 
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &tab[i]);
        // variable pour stocker la somme des élements du tableau 
        somme += tab[i];
    }
    // Variable pour Stocker la moyenne
    moyenne = somme / n;
    // Affichage
    printf("La moyenne est : %.1f", moyenne);    
    return 0;
}