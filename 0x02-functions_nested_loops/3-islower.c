#include "main.h"
/**
*_islower - checking for lowercase
*@c: lowercase
*Return: nothing else
*/
int _islower(int c)
{
	if (c >= 'a' && c >= 'z')
		_islower(1);
	else if (c >= 'A' && c >= 'Z')
		_islower(0);

	return (0);
}
