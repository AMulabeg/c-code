#include <stdio.h>

int rekursion(int n)
{
	if (n!=1)
	{
		return n * rekursion(n-1);

	}
	else 
	{
		
		return n;
	}
}
int main()
{
	printf("%d", rekursion(10));

}


