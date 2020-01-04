#include <stdio.h>

void readInDataFromConsole() {
    printf("Schreiben sie ihren Text: ");
}

void readInDataFromFile() {
    printf("Geben sie den absoluten Pfad der Datei an: ");
}

int main(void)
{
    char chooser;
    do {
        printf("Wolles sie Text selbst eingeben oder aus einer Datei einlesen? (Schreiben: S, Datei: D): ");
        scanf(" %c", &chooser);
        printf("%c", chooser);
    } while (chooser != 'D' && chooser != 'S');
    
    if (chooser == 'S')
    {
        readInDataFromConsole();
    } else {
        readInDataFromFile();
    }
    
    return 0;
}
