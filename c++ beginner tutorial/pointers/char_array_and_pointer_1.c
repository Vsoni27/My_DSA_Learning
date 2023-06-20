#include <stdio.h>
#include <string.h>

int main()
{
    // size of an string array must be >= length(array)+1
    char c0[10];
    c0[0] = 'd';
    c0[1] = 'e';
    c0[2] = 'l';
    c0[3] = 'l';
    printf("%s\n", c0); // this will print some garbage value
    // so to avoid this we put a null terminator at index = length(array)
    c0[4] = '\0';
    printf("%s\n", c0);
    int len = strlen(c0);
    printf("%d\n", sizeof(c0));
    printf("%d\n", len); // inspite of size of array is 10 length of array is coming out to be 4
    char c[6] = {'h', 'e', 'l', 'l', 'o', '\0'};
    printf("%s\n", c);
    printf("%d\n", sizeof(c));
    int len1 = strlen(c);
    printf("%d\n", len);

    char c1[6] = "Hello";
    char* c2;
    c2=c1;
    printf("%s\n",c2);
    printf("%c\n",c1[1]);
    c2[0] = 'A';
    printf("%c\n",c2[0]);
    printf("%s\n",c2+2);

    return 0;
}