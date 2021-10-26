#ifndef dog_h
#define dog_h
/**
 *struct dog - describing aspects of the dog
 *@name: dog name
 *@age: dog age
 *@owner: who owns the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog;

#endif
