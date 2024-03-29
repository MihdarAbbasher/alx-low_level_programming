#ifndef struct_dog
#define struct_dog
/**
 * struct dog - struct dog
 * @name: char pointer
 * @age: int age
 * @owner: char pointer owner
*/

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif /* struct_dog */

