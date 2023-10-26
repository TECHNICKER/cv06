#include "cv06.h"
#include <ctype.h>

char text[] = "Toto jsou 2 vzorove vety, ktere budou zpracovavany Vasemi funkcemi.Auto Hyundai ix35 ma pres 120 konskych sil.";

/*int numofletters(char* string)
{
	int howmany_letters = 0;

	for (int i = 0; i < strlen(string); i++)
	{
		if (isalpha(string[i]) != 0)
		{
			howmany_letters++;
		}
	}

	return howmany_letters;
}

int numofnumbers(char* string)
{
	int howmany_numbers = 0;

	for (int i = 0; i < strlen(string); i++)
	{
		if (isdigit(string[i]) != 0)
		{
			howmany_numbers++;
		}
	}

	return howmany_numbers;
}*/

void replacer(char* replace_in, char replace_this, char replace_with, int replace_times)
{
	int togo = replace_times;

	for (int i = 0; i < strlen(replace_in); i++)
	{
		if (replace_in[i] == replace_this && togo > 0)
		{
			replace_in[i] = replace_with;
			togo--;
		}
	}
}

int main()
{
	//printf("Vzorova veta ma %d pismen a %d cislic.", numofletters(text), numofnumbers(text));

	printf("%s\n", text);

	replacer(text, 'a', 'x', 5);

	printf("%s\n", text);

	return 0;
}
