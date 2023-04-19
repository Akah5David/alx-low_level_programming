#ifndef DOG_H_
#define DOG_H_
typedef struct dog
{
char *name;
float age;
char *owner;
}dog_t;


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void print_dog(dog_t *my_dog); 


#endif
