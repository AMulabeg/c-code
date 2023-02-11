#include <stdio.h>
#include <stdlib.h>
#include "input2.h"

int main() {
    int n = lese_int();
    int laenge = n-1;
    int *array = (int*) malloc(laenge, sizeof(int));
    printf("%p \n",array );

            
    for(int i=0; i<laenge; i++)
    {
        array[i]=1;
    }


    for (int x=0; x<laenge;x++)
    {
        for(int j=x;j<laenge;j=j+x+2)
        {
            if(x==j)
            {
                continue;
            }
            array[j]=0;

        }
    }
    

    print_prim(array, laenge);
    free(array);
    return 0;
}
