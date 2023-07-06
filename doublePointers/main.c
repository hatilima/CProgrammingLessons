#include<stdio.h>

int main()
{
	int a = 39;
	int b = 35;
	int c = 3;

	int* e = &a;
	int* f = &b;
	int* g = &c;

	int** q = &e;

	printf("\n e's value is: %p \n",(void*) e);
	printf("\n f's value is: %p \n",(void*) f);
	printf("\n g's value is: %p \n",(void*) g);
	printf("\n Can we change x?: \n");
	printf("\n Let us do e = f \n");
	e = f;
	printf("\n The value of e is now: %p, the same as 'f'...\n",(void*) e);
	printf("\n This means that we can change the value of e!\n");

	return 0;
}
