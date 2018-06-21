#include <stdio.h>
#include "ReversingString.h"
#include <malloc.h>

int getStringLength(char *str)
{
	int i=0;
	
	if (str==NULL || *str=='\0')
	{
		return 0;
	}
	
	else
	{
		while(str[i] != '\0')
		{
			i++;
		}
		return i;
	}
}

char *ReversingString(char *str)
{
	int start, end, count;
	char *revSTR=str,temp[100];
	char *revStr;
	revStr = malloc(256); 
	
	count = getStringLength(str);
	end = count - 1;
	
	for(start=0;start<count;start++)
	{
		temp[start] = *revSTR;
		revStr[end] = temp[start];
		end--;
		revSTR++;
	}
	revStr[count] = '\0';
	return revStr;
	free(revStr);
}