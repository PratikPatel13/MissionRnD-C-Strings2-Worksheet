/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>
int length(char *str);
char * get_last_word(char * str){
	int lastSpace = -1, i = 0,j = 0;
	char *res = NULL;
	while (str[i] != '\0')
	{
		if (str[i] == ' ' && str[i + 1] != ' ' && str[i+1] != '\0')
		{
			lastSpace = i;
		}
		i++;
	}
	if (lastSpace == -1)
		return "";
	res = (char *)malloc(sizeof(char) * (length(str) - lastSpace));
	i = lastSpace + 1;
	while (str[i] != '\0' && str[i] != ' ')
	{
		res[j++] = str[i++];
	}
	res[j] = '\0';
	return res;
}

int length(char *str)
{
	int i = 0;
	while (str[i++] != '\0')
		;
	return i;
}