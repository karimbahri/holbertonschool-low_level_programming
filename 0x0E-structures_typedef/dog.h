#ifndef Django
#define Django
/*--------------------------------STRUCTS-----------------------------------*/
/**
 * dog_t - an alias of struct dog
 */
typedef struct dog dog_t;
/**
 * struct dog - variable of type dog
 * @name: dog's name
 * @owner: dog's owner name
 * @age: dog's age
 * Description: a dog type with name , owner's name & age attributes
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};

/*-------------------------------PROTOTYPES---------------------------------*/

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
