julien@ubuntu:~/0x04$ cat 0-main.c
#include "main.h"
#include <stdio.h>

int _isupper(int c)
{
if(isupper(c)
{
 return 1;		
}else{
return 0;
}
}
int main(void)
{
    char c;

    c = 'A';
    printf("%c: %d\n", c, _isupper(c));
    c = 'a';
    printf("%c: %d\n", c, _isupper(c));
    return (0);
}
