#include <stdio.h>
#include <string.h>
#include <stdlib.h>



typedef struct BOOK
{
	char name[100];
	int release_year;	
	struct BOOK *next_book;
}book;
	
book *add_new_book(char* name, int release_year, book *oldbook)
{
	book *newbook;
	newbook = (book*)malloc(sizeof(book));
	strcpy(newbook -> name, name);
	newbook ->release_year=release_year;
	newbook ->next_book=oldbook;

	return newbook;

}	

int main(int argc, char const *argv[])
{
	/*book HarryPoter1; 
	strcpy(HarryPoter1.name, "HarryPotter_one");
	HarryPoter1.release_year=2001;

	book HarryPoter2;
	strcpy(HarryPoter2.name, "HarryPotter_two");
	HarryPoter2.release_year=2003;


	HarryPoter1.next_book =&HarryPoter2; */
	book *Library=NULL;dldkldfklfkddlk

	Library=add_new_book("HarryPoter_One", 2001, Library);

	Library=add_new_book("HarryPoter_Two", 2003, Library);




	


	book *tmp;
	tmp=Library;

	while (tmp!=NULL)
	{
		printf("Book Name: %s\n Release Date: %d \n", tmp->name, tmp->release_year);
		tmp=tmp->next_book;
	}

	//printf("Book Name: %s\n Release Date: %d \n Next Book: %s ", HarryPoter1.name, HarryPoter1.release_year, HarryPoter1.next_book ->name);
	//printf("Book Name: %s\n Release Date: %d \n ", HarryPoter2.name, HarryPoter2.release_year);



	book *tmp2;
	book *tmp3;
	tmp2=Library;
	 while(tmp2!=NULL)
	 {
	 	tmp3=tmp2;
	 	tmp2=tmp2->next_book;
	 	free(tmp3);
	 }

	 //free(tmp3);
	
	return 0;
}