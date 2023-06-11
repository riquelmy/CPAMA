#include <stdio.h>
#define T 100// Length of the string
int main(void)
{
    char strOri[T], strUpper[T];// The original and uppercase strings, respectively
    int iC;

    printf("Type here whatever text you've got, so it will be converted to uppercase:\n");
    fgets(strOri, T, stdin);// Input of the string
    
    for (iC=0;strOri[iC]!='\0';iC++)
    {
        strUpper[iC]=strOri[iC];
        if (strOri[iC]>='a'&&strOri[iC]<='z')
        {
            strUpper[iC]=strOri[iC]-'a'+'A';
        }
    }

    for (iC=0;iC<=T;iC++)
    {
        printf("%c", strUpper[iC]);
    }
    return 0;
}