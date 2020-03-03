#ifndef __HOLBERTON__
#define __HOLBERTON__
int _putchar(char c);
char *create_array(unsigned int size, char c);
char *_memset(char *s, char b, unsigned int n);
char *_strdup(char *str);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
char *str_concat(char *s1, char *s2);
char *_strcat(char *dest, char *src);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);
int get_length(char **av, int ac);
#endif