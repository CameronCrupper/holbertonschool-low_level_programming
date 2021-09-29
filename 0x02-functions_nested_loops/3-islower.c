#include "main.h"
/**
*_islower - checking for lowercase
*@c: lowercase
*Return: nothing else
*/
int _islower(int c)
{
	if (c >= 'a' && c >= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c >= 'Z')
	{
		return (0);
	}

	return (0);
}
