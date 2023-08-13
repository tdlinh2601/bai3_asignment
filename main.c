#include <stdio.h>
#include<limits.h> // for int,char macros 
#include<float.h> // for float,double macros 
 
int main()
{
    int i;
    char c;
    float f;
    double d;
    unsigned int ui;
  
    printf("Size of int: %d bytes\n", sizeof i);
    printf("Value range of int : %d to %d\n\n", INT_MIN, INT_MAX);

    printf("Size of char: %d bytes\n", sizeof c);
    printf("Value range of char : %d to %d\n\n", CHAR_MIN, CHAR_MAX); 

    printf("Size of float: %d bytes\n", sizeof f);
    printf("Value range of float : %d to %d\n\n", FLT_MIN, FLT_MAX);

    printf("Size of double: %d bytes\n", sizeof d);
    printf("Value range of double : %le to %le\n\n", DBL_MIN, DBL_MAX);

    printf("Size of unsigned int: %d bytes\n", sizeof ui);
    printf("Value range of unsigned int : 0 to %lli\n\n", UINT_MAX);
}