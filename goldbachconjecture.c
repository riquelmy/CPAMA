#include <stdio.h>
int main(void)
{
    /*
    This is a software based on the Goldbach Conjecture
    – it finds all pairs of primes that when summed up result in an
    even number (as long as the even number is greater than 2).
    I think it is extremely important because it embodies the beauty and 
    the problem-solving skills of Mathematics and algorithms.
    */
    int numi, numf=10000;//The last sequence's even number can be set in numf;
    int num1, td1, div1;
    int num2, td2, div2;
    
    for (numi=2;numi<=numf;numi+=2)
    {
        for (num1=1;num1<=numi;num1++)
        {
            for (td1=0, div1=1;div1<=num1;div1++)
            {
                if (num1%div1==0) {td1++;}
            }
            if (td1==2) 
            {
                for (num2=1;num2<=numi;num2++)
                {
                    for (td2=0, div2=1;div2<=num2;div2++)
                    {
                        if (num2%div2==0) {td2++;}
                    }
                    if (td2==2)
                    {
                        if (num1+num2==numi) {printf("%d <-> %d %d\n ", numi, num1,num2);}
                    }
                }
            }
           
        }
    }
    return 0;
}
