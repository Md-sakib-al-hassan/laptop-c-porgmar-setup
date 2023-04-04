#include <stdio.h>
int main ()
{  float radious;
    scanf("%f",&radious);
    printf("%f\n",radious);
    float volume = 4.0/3*3.1416*radious*radious*radious;
    printf("%f",volume);
    return 0;
}