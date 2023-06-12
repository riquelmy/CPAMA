#include <stdio.h>
#define T 100
/*This is a program that counts the number of words and prints it in the end for you.*/
int main(void)
{
    char text[T];
    int iC, hC, words;

    /*Inputting the text of the user*/
    fgets(text, T, stdin);

    /*This is the body of the algorithm, it counts words based on ASCII decimal value 32*/
    for (iC=0;text[iC]!='\0';iC++)
    {
        for (hC=iC+1;text[hC]!='\0';hC++)
        {
            if (text[hC]==32) {words++;iC=hC;break;}
            
        }
    }

    if (text[iC-2]!=32) {words++;}
    printf("%d\n", words);
    return 0;
}