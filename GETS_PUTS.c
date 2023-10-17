//gets( ) function is used to read a string of characters including white spaces.
//Note that white spaces in a string cannot be read using scanf( ) with %s format specifier. 

//puts() is a function used to display strings on screen.

#include<stdio.h>
main()
{
	/*char name[20]="chinmayee";
	printf("Hello %s",name); */
	
	char name[20];
	gets(name);
	printf("\n\n\t Hello ");
	puts(name);
}
