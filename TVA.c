#include <stdio.h>
#include <stdlib.h>

int main()
{
    float pht, pttc, tva, taux;
    int choix;

    printf("entrer le prix HT");
    scanf("%f",&pht);

    while(choix!=4)
    {
        printf("entrer un taux de TVA a 5.5%, entrez 1:\n");
        printf("entrer un taux de TVA a 20%, entrez 2:\n");
        printf("entrer un taux de TVA a 33%, entrez 3:\n");
        printf("Pour quitter, entrez 4:\n");
        printf("entrer votre choix:");
        scanf("%d",&choix);
        switch (choix)
        {
        case 1 : taux = 0.055;
            break;
        case 2 : taux = 0.20;
            break;
        case 3 : taux = 0.33;
            break;
        case 4 : printf("merci de votre visite...");
            break;
        default : printf("erreur de saisie...");
        }
        if(choix>=1 && choix <=3)
        {
            pttc = pht*(1+taux);
            printf("le prix TTC est de: %f\n", pttc);
        }
    }
    

    return 0;
}
