#include <stdio.h>
#define T 100
// This is a program that will print the length of the string in C.
int main(void)
{
    char text[T];
    int iC, size=0;

    printf("Type in your text:\n");
    fgets(text, T, stdin); // It will prompt user input.
    
    for (iC=0;text[iC]!='\0';iC++){;} /* iC is a counting variable, it will count
                                        until it reachs the null character. On the other hand,
                                      {;}  contains the null statement, which is ;          */
    
    size=iC-1; // A new line is added at the of the fgets input, so I will subtract one.

    printf("\nThe length of the text is %d\n", size);
}