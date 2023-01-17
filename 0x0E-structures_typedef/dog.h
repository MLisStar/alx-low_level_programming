#ifndef DOG_H
#define DOG_H
/**
 * struct dog - a new type to describe a dog
 * @name: name of dog
 * @age: its age
 * @owner: the owner
 *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif