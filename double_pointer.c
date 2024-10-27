#include <stdio.h>
int main()
{
    int i = 10, *p, **q;
    p = &i;
    q = &p;
    printf ("%p", &**q); /* вывод адреса переменной i */
    printf ("\n%p", *q); /* тоже, что и вверху */
    printf ("\n%p", q); /* адрес самого у-ля */
    return 0;
}