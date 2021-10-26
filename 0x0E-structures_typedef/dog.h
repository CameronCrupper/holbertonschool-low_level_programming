#ifndef dog_t
#define dog_t
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

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
