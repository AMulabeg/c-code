#include <stdio.h>
#include <math.h>

int main(){
    int a;
    int b=0;
    printf("give a number: ");
    scanf("%d", &a);
    while ((pow(2,b)) < a){
        printf("%f \n", pow(2,b));
        b++;
    }
    
    return 0;

}