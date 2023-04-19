#ifndef DOG_H_
#define DOG_H_
typedef struct dog
{
char *name;
float age;
char *owner;
}my_dog;


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

typedef struct dog
{
char *name;
float age;
char *owner;
}dog_t; 


#endif
