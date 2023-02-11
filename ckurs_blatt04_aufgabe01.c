#include <stdio.h>
#include <stdlib.h>
#include "input.h" // Hier binden wir die Bibliothek ein

int fibonacci(n)
{
    int fibonacci_number=1;
    if(n==1 || n==2)
    {
        return 1l
    }
    
    if(n>1)
    {   
        
        return fibonacci_number=fibonacci(n-1)+fibonacci(n-2);
    }
    else
    {
        
        return fibonacci_number;
    }
}

int main(){
    int n = lese_int(); // Hier rufen wir die Funktion lese_int auf.
    int f = fibonacci(n);
    printf("Fib(%d) = %d\n" , n, f); 

    return 0; //Beende das Programm ohne Fehlermeldung
}
