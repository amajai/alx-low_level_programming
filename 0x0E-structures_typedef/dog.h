#ifndef DOG_H
#define DOG_H
/**
 * struct dog - a struct data type with 3 elements
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: a struct data type with 3 attributes for a dog owner.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
#endif
