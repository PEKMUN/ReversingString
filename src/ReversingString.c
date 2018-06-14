#include <stdio.h>
#include "ReversingString.h"

int getStringLength(char *str)
{
	int i=0;
	
	if (str==NULL || str=='\0')
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

