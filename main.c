// Getraenke Automat Version 0.1

int einwurf=0;
int Wahl=0;
int Ausgabe=0;

printf('Getraenke Automat | Bitte werfen sie 1 Euro ein: ');
scanf("%d", &einwurf);

// überpruefe Geldstueck
if(einwurf == 1) {
    Ausgabe = 1;
    printf  ("\nBitte waehlen sie ihr Getraenk.\n");
            ("\n 1 = Wasser\n");
            ("\n 1 = Limonade\n");
            ("\n 1 = Bier\n");
    scanf("%d", Wahl);

    while (Ausgabe)
    {
    switch
        case: 1:
            printf("\n  Wasser ausgeben\n");
            Ausgabe = 0;
        break;
        case: 2:
            printf("\n  Limonade ausgeben\n");
            Ausgabe = 0;
        break;
        case: 3:
            printf("\n  Wasser ausgeben\n");
            Ausgabe = 0;
        break;
        default:
            printf("\n  Eingabe ungueltig. Bitte Wahl erneut treffen.\n");
        break;
    }

    printf("\nVielen Dank, bitte entnehmen sie ihr Getraenk.\n");
}else {
    printf("\nSie haben kein 1 Euro Stueck eingeworfen.\n");
}