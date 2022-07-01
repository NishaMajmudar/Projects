#include<stdio.h>
#include<string.h>
#include"pro.h"

void main()
{
	char str[50],str2[50];
	int temp;
	
	printf("Enter the String\n");
	gets(str);
	printf("Enter second String\n");
	gets(str2);

	temp=cmp(str,str2);

	if(temp==0)
	{
		printf("String Same\n");
	}
	else
	{
		printf("String not same\n");
	}
}		
