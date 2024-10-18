// Getraenke Automat Version 0.1


#include <math.h>
#include <stdio.h>

void Menu_anzeigen(void) {
    printf("\nBitte waehlen sie ihr Getraenk.\n");
    printf("1 = Wasser (0,50 Euro)\n");
    printf("2 = Limonade (1,00 Euro)\n");
    printf("3 = Bier (2,00 Euro)\n");
}


int main() {

    float Preis = 0;
    float einwurf=0;
    int Wahl=0;
    int Menge=0;

    while(1) {

        Preis = 0;
        einwurf=0;
        Wahl=0;

        Menu_anzeigen();
        scanf("%d",&Wahl);
        printf("Bitte Menge waehlen\n");
        scanf("%d",&Menge);

        switch (Wahl) {
            case 1:
                Preis = 0.5;
            break;
            case 2:
                Preis = 1;
            break;
            case 3:
                Preis = 2;
            break;
        }

        Preis = Preis * Menge;
        printf("\nBitte werfen sie %.2f Euro ein:\n",Preis);

        while (Preis > 0) {
            scanf("%f",&einwurf);
            Preis -= einwurf;
            einwurf = 0;
        }

        switch (Wahl) {

            case 1:
                printf("\n%.2dx Wasser ausgeben\n",Menge);
            break;
            case 2:
                printf("\n%.2dx Limonade ausgeben\n",Menge);
            break;
            case 3:
                printf("\n%.2dx Bier ausgeben\n",Menge);
            break;
        }

        if (Preis < 0) {
            Preis = (Preis) * -1;
            printf("\n%.2f Euro Rueckgeld ausgeben\n",Preis);
        }

        printf("\nVielen Dank, bitte entnehmen sie ihr Getraenk.\n");

    }
}