#include <stdio.h>
/**
* main - Do not print e and q
*
* Return: Always 0 (Success)
*/
int main(void)
{
char lower;

for (lower = 'a'; lower <= 'z'; lower++)
{
if (lower != 'e' && lower != 'q')
putchar(lower);
}
putchar('\n');
return (0);
}
