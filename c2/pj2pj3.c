#include <stdio.h>
#define PI 3.14f
int main(void)
{
    float radius, volume;
    printf("Type in the radius: \n");
    scanf("%f", &radius);
    volume=(4.0f/3.0f)*PI*radius*radius*radius;
    printf("The volume is %f", volume);
    return 0;
}
