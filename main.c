#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int MAX = 100, MIN = 1; //On call les valeurs
    srand(time(NULL));
    int continuerPartie = 1;
    int nombreDifficulte = 0;
    printf("Selectionnez la difficulte : \n1. Facile\n2. Normale\n3. Difficile\n4. Impossible\n");
    scanf("%d", &nombreDifficulte); //On demande le niveau de difficulté pour le joueur
    switch (nombreDifficulte) //On fait un menu
    {
        case 1:
        MAX = 100;
        break;

        case 2:
        MAX = 1000;
        break;

        case 3:
        MAX = 10000;
        break;

        case 4:
        MAX = 30000;
        break;

        default:
        printf("Veuillez envoyer un message a l'editeur.");
        break;
    }
    while (continuerPartie = 1) //On fait une boucle pour recommencer la partie
    {
    int compteurCoup = 0;
    int nombreEntre;
    int nombreMystere = (rand() & (MAX - MIN + 1)) + MIN;
    int deuxJoueur = 0;
    printf("\n\nChoisissez votre mode : \n1. 1 joueur\n2. 2 joueurs "); //On demande le nombres de joueurs
    scanf("%d", &deuxJoueur);
    switch (deuxJoueur) //On fait un switch pour demander au(x) joueur(x) quel mode de jeu choisissent-ils
    {
    case 1:
        while (nombreEntre != nombreMystere)
    {
        printf("\nQuel est le nombre mystere ? ");
        scanf("%d", &nombreEntre);
        if (nombreEntre < nombreMystere)
        {
            printf("C'est plus !\n\n");
        }
        else if (nombreEntre > nombreMystere)
        {
            printf("C'est moins !\n\n");
        }
            compteurCoup++;
    }
    printf("\nBravo, vous avez trouve le nombre mystere en %d coups !!!\n\n", compteurCoup);
    printf("Voulez vous recommencer une partie ? 1 = Oui 0 = Non ");
    scanf("%d", &continuerPartie);
    break;

    case 2:
    {
            printf("Saisissez le nombre mystere : ");
            scanf("%d", &nombreMystere);
            printf("\n\n\n\n\n\n\n\n\n\n\n\n");
                while (nombreEntre != nombreMystere)
    {
        printf("\nQuel est le nombre mystere ? ");
        scanf("%d", &nombreEntre);
        if (nombreEntre < nombreMystere)
        {
            printf("C'est plus !\n\n");
        }
        else if (nombreEntre > nombreMystere)
        {
            printf("C'est moins !\n\n");
        }
            compteurCoup++;
    }
    compteurCoup--;
    printf("\nBravo, vous avez trouve le nombre mystere en %d coups !!!\n\n", compteurCoup);
    printf("Voulez vous recommencer une partie ? 1 = Oui 0 = Non "); //On demande au joueur s'il veut recommencer
    scanf("%d", &continuerPartie);
    break;
    }
    default: //Je me suis servis du "default" en cas de bug ou d'une entrée incorrecte
        printf("Veuillez relancer le programme.");
        break;

    }
    }
    int Fermer = 0;
    scanf("%d", &Fermer);
    return 0;
}
