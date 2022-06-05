#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success/correct)
 */

int main(void)

{
char l_case_alphabet;

for (l_case_alphabet = 'a'; l_case_alphabet <= 'z'; l_case_alphabet++)
{
if (l_case_alphabet == 'q')
continue;

else if (l_case_alphabet == 'e')
continue;

putchar(l_case_alphabet);
}

putchar('\n');

return (0);

}
