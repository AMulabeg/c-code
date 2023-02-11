#include <stdio.h>
#include <stdlib.h>

void print_array(int array[], int len) {
    for(int i=0; i<len; i++)
    {
        printf("%d", array[i]);
    }
}

// Schreibe die Funktion "sum", "min" und "max"

int main() {
    int array[] = {9, 4, 7, 8, 10, 5, 1, 6, 3, 2};
    int len = 10;
    print_array(array, len);
    
}
