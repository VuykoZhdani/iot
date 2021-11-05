
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include<stdlib.h>

int main()
{
	
	
	char u[100] = "";
	gets_s(u);
	printf("%d\n", strlen(u));
	

	
	if(isupper(u[0]))
	{
		puts("true");
	}
	else
	{
		puts("false");
	} 
	
	
}
