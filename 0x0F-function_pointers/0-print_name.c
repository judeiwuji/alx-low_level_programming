/**
 * print_name - Prints a name
 * @name: name to be printed
 * @f: callback function
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
