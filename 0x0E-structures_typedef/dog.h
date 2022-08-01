#ifndef DOG_H
#define DOG_H
/**
* struct dog - structure
* @name: string
* @age: float
* @owner: characters
*/
struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
