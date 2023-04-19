#ifndef DOG_H_
#define DOG_H_
struct dog
{
char *name;
float age;
char *owner;
}my_dog;


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void print_dog(dog_t *my_dog); 


#endif
