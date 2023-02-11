#include <stdio.h>

int main(){

	int nummer;

	printf("Ist %d eine Primzahl ", nummer);
	scanf("%d", &nummer);

	for(int i=2; i<(nummer/2); i++){

		if(nummer%i==0){
			printf("Nein");
			return 0;
		}
	}
	printf("Ja");
	return 0;
}