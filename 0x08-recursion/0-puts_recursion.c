#include "main.h"

/*custom implementation of _puts_recursion */
void _puts_recursion(char *s) {
if (*s == '\0') {
_putchar('\n');
return;
}
_putchar(*s);
_puts_recursion(s + 1);
}
