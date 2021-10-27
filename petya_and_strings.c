#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
	char first_word[101] ;
	char second_word[101];
	scanf("%s %s", first_word, second_word);

	// z == 122
	int win = 0;

	for (int i = 0; i < strlen(first_word); i++)
	{
		if ((first_word[i] >= 'A' && first_word[i] <= 'Z'))
		{
			first_word[i] = tolower(first_word[i]);
		}

		if ((second_word[i] >= 'A' && second_word[i] <= 'Z'))
		{
			second_word[i] = tolower(second_word[i]);
		}		
	}


	for (int i = 0; i < strlen(first_word); i++)
	{
		if (first_word[i] > second_word[i])
		{
			win = 1;
			break;
		}
		else if (first_word[i] < second_word[i])
		{
			win = -1;
			break;
		}
	}

	printf("%i", win);



}









