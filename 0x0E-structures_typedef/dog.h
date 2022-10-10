#ifndef _DOG_H_
#define _DOG_H_
/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;
/**
 * struct dog - struct that stores some info in dog
 * @name: name of dog
 * @owner: owner of dog
 * @age: age of dog
 *
 * Description: struct called dog that stores its name, age and 
 * name of owner
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
