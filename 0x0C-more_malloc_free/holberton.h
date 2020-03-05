#ifndef __HOLBERTON__
#define __HOLBERTON__
int _putchar(char c);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
int _strlen(char *s);
char *_strncat(char *dest, char *src, int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
char *_memset(char *s, char b, unsigned int n);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
void set_memory(char *array, char *src, int new_size, int old_size);
#endif
