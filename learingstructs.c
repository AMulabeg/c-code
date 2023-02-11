#include <stdio.h>
#include <string.h>

struct Person
{
	char name[100];
	int age;
};

typedef struct girlfriend
{
	struct Person p;
}girlfriend;

int main(int argc, char const *argv[])
{
	struct Person person1;
	struct Person *pointer = &person1;
	girlfriend Beba;

	strcpy(Beba.p.name, "Elena");
	Beba.p.age=18;





	strcpy(person1.name, "Amer");
	person1.age=19;
	

	 printf("%d \n", person1.age);
	printf("%s \n", pointer -> name);
	printf("%d \n", Beba.p.age);
	printf("%s \n", Beba.p.name);

	return 0;
}	