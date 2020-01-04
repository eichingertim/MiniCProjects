#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void printLettersCounted(int letterCountArr[26]) {
    for (int i = 0; i < 26; i++) {
        if (letterCountArr[i] != 0) 
        {
            printf("%c: %d mal\n", (char) (i + 'A'), letterCountArr[i]);
        }
        
    }
}

int main(void)
{
    int letterCountArr[26] = {0};
    char wordStr[100];
    int counter = 0;
    printf("Geben sie ein oder mehrere Woerter getrennt mit Leerzeichen ein (max. 100 Zeichen, Sonderzeichen werden ignoriert): ");
    gets(wordStr);
    
    while (wordStr[counter] != '\0')
    {
        if ((wordStr[counter] >= 'A' && wordStr[counter] <= 'Z') || (wordStr[counter] >= 'a' && wordStr[counter] <= 'z'))
        {
            int index = toupper(wordStr[counter]) - 'A';
            letterCountArr[index]++;
        
        }
        counter++;
    }

    printLettersCounted(letterCountArr);

    return 0;
}
