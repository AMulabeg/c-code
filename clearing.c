#include <stdio.h>


int main()
{
    int a;
    int b;
    char c;
    printf("enter number: ");

    scanf("%d", &a);

    printf("enter the other one: ");
    scanf("%d", &b);

    printf("enter the operator: ");
    scanf(" %c", &c);
    printf("%c \n", c);
    
    if(c =='+'){
        printf ("%d + %d = %d", a, b, a+b);
        }
        
    else if(c=='-'){
        printf ("%d - %d = %d", a, b, a-b);
    }
    else if(c=='*'){
        printf ("%d * %d = %d", a, b, a*b);
    } 
    else if(c=='/'){
        printf ("%d : %d = %d", a, b, a/b);
    } 
    
    

    //printf("%d", a+b);

    //printf("%d + %d = %d", a, b, a+b);
    return 0;


  
  
  

}