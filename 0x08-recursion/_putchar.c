#include <unistd.h>

/* custom implementation of _putchar */
int _putchar(char c){
return write (1, &c, 1);
}
