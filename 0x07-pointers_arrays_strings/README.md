# C - Even more pointers, arrays and strings

[0-memset.c](./0-memset.c)
This function fills memory with a constant byte.

- Prototype: char *\_memset(char *s, char b, unsigned int n);
- The \_memset() function fills the first n bytes of the memory area pointed to by s with the constant byte b
- Returns a pointer to the memory area s

[1-memcpy.c](./1-memcpy.c)
This function copies memory area.

- Prototype: char *\_memcpy(char *dest, char \*src, unsigned int n);
- The \_memcpy() function copies n bytes from memory area src to memory area dest
- Returns a pointer to dest
