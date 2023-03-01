#ifndef _DOG_H_
#define _DOG_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct dog - dog attributes
 * @name: The name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Description: attributes of a dog
 */
struct dog
{
    char *name;
    float age;
    char *owner;
};

/**
 * dog_t - Typedef for dog structures
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* _DOG_H_ */

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    dog_t *my_dog;

    my_dog = new_dog("Poppy", 3.5, "Bob");
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog->name, my_dog->age);
    free_dog(my_dog);
    return (0);
}

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog structure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *new_dog;
    char *new_name, *new_owner;
    int name_len, owner_len;

    if (name == NULL || owner == NULL)
        return (NULL);

    new_dog = malloc(sizeof(dog_t));
    if (new_dog == NULL)
        return (NULL);

    name_len = strlen(name);
    new_name = malloc(sizeof(char) * (name_len + 1));
    if (new_name == NULL)
    {
        free(new_dog);
        return (NULL);
    }
    strcpy(new_name, name);

    owner_len = strlen(owner);
    new_owner = malloc(sizeof(char) * (owner_len + 1));
    if (new_owner == NULL)
    {
        free(new_name);
        free(new_dog);
        return (NULL);
    }
    strcpy(new_owner, owner);

    new_dog->name = new_name;
    new_dog->age = age;
    new_dog->owner = new_owner;

    return (new_dog);
}

/**
 * free_dog - frees memory allocated for a dog structure
 * @d: pointer to

