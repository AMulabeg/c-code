#include <stdio.h>
#include <stdlib.h>

void print_array(int array[], int len) {
    printf("Array: ");
    for(int i=0; i<len; i++)
    {
        printf(" %d", array[i]);
        if(i!=len-1)
        {
            printf(","); 
        }
        
    }
     printf("\n");
}

void sum(int *s, int array[],int len){
    *s=0;
    for(int j=0; j<len; j++)
    {
        *s+=array[j];
    }

}

int max(int array[],int len){
    int maxi=0;
    for (int x; x<len; x++)
    {
        if (maxi<array[x])
        {
            maxi=array[x];
        }
    }
    return maxi;
    
}

int min(int array[],int len){
    int mini=array[0];
    for (int x; x<len; x++)
    {
        if (mini>array[x])
        {
            mini=array[x];
        }
    }
    return mini;
    
}

// Schreibe die Funktion "sum", "min" und "max"

int main() {
    int summe=0;
    
    int array[] = {9, 4, 7, 8, 10, 5, 1, 6, 3, 2};
    int len = 10;
    print_array(array, len);
    printf("Maximum: %d \n", max(array, len));
    printf("Minimum: %d \n", min(array, len));
    sum(&summe, array, len);
    printf("Summe: %d \n", summe);

            
}
