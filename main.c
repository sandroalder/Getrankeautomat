// Getraenke Automat Version 0.1


#include <math.h>
#include <stdio.h>

void Menu_anzeigen(void) {
    printf("\nBitte waehlen sie ihr Getraenk.\n");
    printf("1 = Wasser (0,50 Euro)\n");
    printf("2 = Limonade (1,00 Euro)\n");
    printf("3 = Bier (2,00 Euro)\n");
}

int pruefe_Geldstueck(float Geld) {
    int true = 0;
    if (Geld == 0.05)
        true = 1;
    if (Geld == 0.1)
        true = 1;
    if (Geld == 0.2)
        true = 1;
    if (Geld == 0.5)
        true = 1;
    if (Geld == 1)
        true = 1;
    if (Geld == 2)
        true = 1;
    return true;
}

void Ausgabe (int Wahl, int Menge) {
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
}

void Rueckgeld (float Preis) {
    if (Preis < 0) {
        Preis = (Preis) * -1;
        printf("\n%.2f Euro Rueckgeld ausgeben\n",Preis);
    }
}

float Preis_rechner(int Wahl, int Menge) {
    float Preis = 0;
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

    return Preis * Menge;;
}

float Geld_Einwurf(float Preis) {
    float einwurf = 0;
    while (Preis > 0) {
        int true;
        scanf("%f",&einwurf);
        true = pruefe_Geldstueck(einwurf);
        if (true)
            Preis -= einwurf;
        else
            printf("\nGeldstueck ungueltig\n");
        einwurf = 0;
    }
    return Preis;
}

int main() {

    float Preis = 0;
    int Wahl=0;
    int Menge=0;

    while(1) {

        Preis = 0;
        Wahl=0;

        Menu_anzeigen();
        scanf("%d",&Wahl);
        printf("Bitte Menge waehlen\n");
        scanf("%d",&Menge);

        Preis = Preis_rechner (Wahl, Menge);

        printf("\nBitte werfen sie %.2f Euro ein:\n",Preis);

        Preis = Geld_Einwurf(Preis);
        Ausgabe(Wahl, Menge);
        Rueckgeld (Preis);

        printf("\nVielen Dank, bitte entnehmen sie ihr Getraenk.\n");

    }
}