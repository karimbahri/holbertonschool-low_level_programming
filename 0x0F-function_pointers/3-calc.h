#ifndef __CALC__
#define __CALC__

/*-----------------------------MACROS----------------------------*/
#define EXIT_WITH_ERROR(X) {printf("Error\n"); \
							exit(X); }

/*----------------------------STRUCKS----------------------------*/
/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

/*---------------------------PROTOTYPES---------------------------*/
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);

#endif
