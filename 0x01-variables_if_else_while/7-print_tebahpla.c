#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success/correct)
 */

int main(void)

{
char letters;

for (letters = 122 ; letters >= 97; letters--)
{
putchar(letters);
}

putchar('\n');

return (0);


}
