#include "main.h"
/**
 *rev_string - reversing a string
 *@s: pointer
 *
 */
void rev_string(char *s)
{
	char r;
	int i = 0;
	int j = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	while (i > j)
	{
		r = s[i];
		s[i] = s[j];
		s[j] = r;
		j++;
		i--;
	}
}
