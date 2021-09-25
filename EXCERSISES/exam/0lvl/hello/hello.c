/*======================================./0-0-hello.txt=========================
Assignment name  : hello
Expected files   : hello.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that displays "Hello World!" followed by a \n.

Example:

$>./hello
Hello World!
$>./hello | cat -e
Hello World!$
$>
============================================================================*/

#include "hello.h"

void	ft_putstr(void)
{
	write(1, "Hello World!", 13);
}
