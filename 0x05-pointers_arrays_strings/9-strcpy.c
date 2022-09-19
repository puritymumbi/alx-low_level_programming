#include "main.h"
/**
  **_strcpy - This function copies the string pointed to by src,
  *including the terminating null byte (\0),
  *to the buffer pointed to by dest.
  *@dest: first pointer argument
  *@src: second pointer argument
  *Return: Pointer to dest
  */
char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);

	return (*dest);

}

