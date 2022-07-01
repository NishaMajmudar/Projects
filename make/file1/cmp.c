#include<stdio.h>
#include<string.h>
#include"pro.h"

int cmp(char *str,char *str2)
{
	int i=0;
	while(str[i]==str2[i])
	{
		if(str[i]!='\0'&&str2[i]!='\0')
		{
			break;
		}
	}
	
	return str[i] - str2[i];
}	
	


