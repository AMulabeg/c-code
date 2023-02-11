#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char wochentag[] = "Freitag";
    int tag = 13;
    char monat[] = "Mai";
    int jahr = 1927;
    const size_t kapazitaet=strlen(monat);
    char *string=(char*) malloc((kapazitaet+1)*sizeof(char));
    strncpy(string, monat, kapazitaet);

    


    printf("%d, %s %d \n",tag, string, jahr);
    free(string);

    return 0;
}
