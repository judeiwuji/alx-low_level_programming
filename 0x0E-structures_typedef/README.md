# C - Structures, typedef

[dog.h](./dog.h)
Define a new type struct dog with the following elements:

- name, type = char \_
- age, type = float
- owner, type = char \_

[1-init_dog.c](./1-init_dog.c)
Write a function that initialize a variable of type struct dog

Prototype: void init_dog(struct dog *d, char *name, float age, char \*owner);

[2-print_dog.c](./2-print_dog.c)
Write a function that prints a struct dog

- Prototype: void print_dog(struct dog \*d);
- Format: see example bellow
- You are allowed to use the standard library
- If an element of d is NULL, print (nil) instead of this element. (if name is NULL, print Name: (nil))
- If d is NULL print nothing.
