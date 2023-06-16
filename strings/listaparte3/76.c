#include <stdio.h>
#define T 100
int main(void)
{
    char texto[T]; int iC; 
    int vetor[5]={0,0,0,0,0};
    fgets(texto, T, stdin);

    for (iC=0;texto[iC]!='\0';iC++)
    {
        if (texto[iC]=='a'||texto[iC]=='A')
        {vetor[0]++;}
        else if (texto[iC]=='e'||texto[iC]=='E')
        {vetor[1]++;}
        else if (texto[iC]=='i'||texto[iC]=='I')
        {vetor[2]++;}
        else if (texto[iC]=='o'||texto[iC]=='O')
        {vetor[3]++;}
        else if (texto[iC]=='u'||texto[iC]=='U')
        {vetor[4]++;}
    }
    for (iC=0;iC<5;iC++)
    {
        if (iC==0) {
        printf("a - %d \n", vetor[iC]);
        }
        else if (iC==1) {
        printf("e - %d \n", vetor[iC]);
        }
        else if (iC==2) {
        printf("i - %d \n", vetor[iC]);
        }
        else if (iC==3) {
        printf("o - %d \n", vetor[iC]);
        }
        else if (iC==4) {
        printf("u - %d \n", vetor[iC]);
        }
    }
    return 0;
}