// Getraenke Automat Version 0.1


#include <stdio.h>

int main() {

    int einwurf=0;
    int Wahl=0;
    int Ausgabe=0;

    printf("\n Getraenke Automat | Bitte werfen sie 1 Euro ein:\n ");
    scanf("%d", &einwurf);

    // überpruefe Geldstueck
    if(einwurf == 1) {
        Ausgabe = 1;
        printf  ("\n Bitte waehlen sie ihr Getraenk.\n");
        ("\n 1 = Wasser\n");
        ("\n 2 = Limonade\n");
        ("\n 3 = Bier\n");
        scanf("%d",&Wahl);

        while (Ausgabe)
        {
            switch (Wahl) {

                case 1:
                    printf("\n Wasser ausgeben\n");
                Ausgabe = 0;
                break;
                case 2:
                    printf("\n Limonade ausgeben\n");
                Ausgabe = 0;
                break;
                case 3:
                    printf("\n Wasser ausgeben\n");
                Ausgabe = 0;
                break;
                default:
                    printf("\n Eingabe ungueltig. Bitte Wahl erneut treffen.\n");
                break;
            }
        }

        printf("\n Vielen Dank, bitte entnehmen sie ihr Getraenk.\n");
    }
    else {
        printf("\n Sie haben kein 1 Euro Stueck eingeworfen.\n");
    }
}