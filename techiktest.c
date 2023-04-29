#include <stdio.h>

void ausgeben(char * text, unsigned int nub)
{
  for (int i=0; i<nub; i++)
  {
    printf("%s", text);
  }

}
int main(int argc, char *argv[])
{
    char * text = "Hello Welt!";
    unsigned int nub = 10;
    ausgeben(text, nub);


}
