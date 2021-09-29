#include "main.h"
/**
*_isalpha - checking to see if its an alphabet chracter
*@c: letter its checking
*Return: nothing else
*/
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
