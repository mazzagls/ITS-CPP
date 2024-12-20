#include <stdio.h>

int main()
{
    char name[32];
    printf("Inserisci il tuo nome: ");
    scanf("%s", name);

    char surname[32];
    printf("Inserisci il tuo cognome: ");
    scanf("%s", surname);

    printf("\n\n\nBenvenuto, %s ", name);printf("%s\n\n", surname);

    printf("Grazie per avver usato il nostro programma.\nTi auguriamo Buone Feste\n");
    printf("    *    \n   ***   \n  *****  \n ******* \n   ***   \n\n\n\n");
}