#include <stdio.h>
 
int main(void) {
             
    static int     a       =120;
    long    b       =300;
    unsigned c      =2;
    long long d     =2222;
    float   e       =123.0f;
    double  f       =1222.90;
    char    g       = "A";
 
    printf("\nSize of int: %d",sizeof(a));
    printf("\nSize of long: %d",sizeof(b));
    printf("\nSize of unsigned: %d",sizeof(c));
    printf("\nSize of long long: %d",sizeof(d));
    printf("\nSize of float: %d",sizeof(e));
    printf("\nSize of double: %d",sizeof(f));
    printf("\nSize of char: %d",sizeof(g));
}