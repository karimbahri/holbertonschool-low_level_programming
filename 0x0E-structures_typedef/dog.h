#ifndef Django
#define Django
/*--------------------------------STRUCTS-----------------------------------*/

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
#endif
