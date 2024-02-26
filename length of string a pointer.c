//Q.1 Write a Program to find the length of a string using a Pointer.
#include <stdio.h>

int main() {

    char a[100], * ptr;
    int count;

    printf("Enter any string: ");
    gets(a);
    ptr = &a;
    count = 0;
    
    while (*ptr!='\0'){
        count++;
        ptr++;
    }

    printf("The length of the string is: %d", count);

}