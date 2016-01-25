/*

Problem : Return the Count of how many times the word occurred in given string in two ways
Way1: Not using Recursion
Way2:Using Recursion [Optional]

Input : "Hello HelloAgain HelloAGAINAGAIN commonItsHelloagain","Hello"
Output : 4

Note: Dont modify original str or word,Just return count ,Spaces can also be part of words like "ab cd" in "ab cd ab cd" returns 2
*/
#include<stdlib.h>
#include<string.h>
int compare(char *str, char *word, int i);
int count_word_in_str_way_1(char *str, char *word){
	if (str == NULL || word == NULL)
		return 0;
	int i = 0, j = 0, count = 0;
	while (str[i] != '\0')
	{
		if (str[i] == word[j])
		{
			if (compare(str, word, i) == 1)
			{
				count++;
			}
		}

		i++;
	}
	return count;
}

int compare(char *str, char *word, int i)
{
	int j = 0;
	while (word[j] != '\0')
	{
		if (str[i] == word[j])
		{
			i++;
			j++;
		}
		else
		{
			return 0;
		}
	}
	return 1;

}
