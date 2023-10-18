//strcmpi :  compares two strings & returns the result accordingly by ignoring the case.

//hello & Hello are equal.


#include<stdio.h>
main()
{
	char str1[40]="hello";
	char str2[40]="Hello";
	
	
	/*printf("\n\n Input string1  : ");
	gets(str1);
	
	printf("\n\n Input string2  : ");
	gets(str2);*/
	
	if(strcmpi(str1, str2)==0)
		printf("\n\n Both the strings are equal.. %s & %s",str1, str2);
	
	else	
		printf("\n\n Both the strings are not equal.. %s & %s",str1, str2);
}
