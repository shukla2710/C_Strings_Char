//strcmp :  compares two strings & returns the result accordingly.

//Compares the case as well. e.g hello & hello are equal. hello & Hello are not equal.

//If str1 is less than str2, the return value is less than 0.
//If str1 is greater than str2, the return value is greater than 0.
//If str1 is equal to str2, the return value is 0. 

#include<stdio.h>
main()
{
	char str1[40]="hello";
	char str2[40]="hello";
	
	
	/*printf("\n\n Input string1  : ");
	gets(str1);
	
	printf("\n\n Input string2  : ");
	gets(str2);*/
	
	if(strcmp(str1, str2)==0)
		printf("\n\n Both the strings are equal.. %s & %s",str1, str2);
	
	else	
		printf("\n\n Both the strings are not equal.. %s & %s",str1, str2);
}
