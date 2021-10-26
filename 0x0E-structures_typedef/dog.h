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

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
