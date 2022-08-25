#include "main.h"
/**
* _isalpha - checks alphabetic character
* @c: character to be checked on
* Return: 1 if successful, 0 if unsuccessful
*/
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
