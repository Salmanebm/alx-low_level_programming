#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog structures 
 * @name: Name
 * @age: Age
 * @owner: owner of dog
 *
 * Description: structures containes Dog's info
 */
struct dog{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;


#endif
