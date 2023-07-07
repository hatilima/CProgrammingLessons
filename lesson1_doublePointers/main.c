#include<stdio.h>

void assignPointer(int* a, int* b);
void assignDoublePointer(int** a, int* b);

int main()
{
	int a = 39;
	int b = 35;
	int c = 3;

	int* e = &a;
	int* f = &b;
	int* g = &c;

	int** q = &e;
	
	printf("\n##################################################################\n");
	printf("\n e's value is: %p \n",(void*) e);
	printf("\n f's value is: %p \n",(void*) f);
	printf("\n g's value is: %p \n",(void*) g);
	printf("\n##################################################################\n");
	printf("\n Can we change x outside a function?: \n");
	printf("\n Let us do e = f \n");
	e = f;
	printf("\n The value of e is now: %p, the same as 'f'...\n",(void*) e);
	printf("\n This means that we can change the value of e outside a function!\n");
	printf("\n##################################################################\n");	
	printf("\n But can you change the value of a pointer(a) inside a function\n");
	printf("\n and still retain the new value?\n");

	printf("\n Let us use the function, assingPointer(int* m, int* n) to assign g to e:\n");
	assignPointer(e, g);
	printf("\n The value of e outside the single-pointer function is e = %p \n", (void*)e);
	printf(" And the value of g is: %p\n", (void*)g);
	printf("\n##################################################################\n");
	printf("\n Let us use the function, assingDoublePointer(int **s, int* t) to assign g to e:\n");
	assignDoublePointer(q, g);
	printf("\n The value of e outside the doube-pointer function is e = %p \n", (void*)e);
	printf(" And the value of g is: %p\n",(void*)g);
	printf("\n##################################################################\n");
	
	return 0;
}

void assignPointer(int* a, int* b)
{
	a = b;
	printf("\n The value of a inside the single-pointer function is a = %p", (void*)a);
}

void assignDoublePointer(int** a, int* b)
{
	*a = b;
	printf("\n The value of e inside the double-pointer function is a = %p", (void*)(*a));
}
