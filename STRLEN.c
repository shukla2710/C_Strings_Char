//strlen :  returns the length of the string including space.

#include<stdio.h>
main()
{
	char str[20];
	int len;
	
	printf("\n\n Enter a string : ");
	gets(str);
	
	len=strlen(str);
	
	printf("\n\n string :  %s", str);
	printf("\n\n Length of string : %d",len);	
	
}
