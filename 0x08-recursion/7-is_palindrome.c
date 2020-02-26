#include "holberton.h"

/**
 * is_palindrome - check if s is palindrome
 * @s: string to check
 * Return: 1 if palindrome 0 otherwise
 */
int is_palindrome(char *s)
{
	int length = _strlen_recursion(s), pos = (length / 2) + 1;

	if (length % 2)
		pos++;

	return (check_palindrome(s, pos));

}

/**
 * check_palindrome - check if s is palindrome
 * @s: string to check
 * @pos: current position
 * Return: 1 if true 0 otherwise
 */
int check_palindrome(char *s, int pos)
{
	if (!*s)
		return (1);

	if (s[pos] == s[_strlen_recursion(s) - pos - 1] &&
	pos + 1 < _strlen_recursion(s))
		return (check_palindrome(s, pos + 1));

	if (pos + 1 == _strlen_recursion(s))
		return (1);

	else
		return (0);
}

/**
 * _strlen_recursion - count the length of string
 * @s: string to count
 * Return: length
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (!*s)
		return (0);

	length = _strlen_recursion(s + 1);

	return (length + 1);
}
