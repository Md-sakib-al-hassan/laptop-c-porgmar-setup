#include <stdio.h>
int main(){
    int ang1,ang2;
    scanf("%d %d",&ang1,&ang2);
    int ang3 = 180-(ang1+ang2);
    printf("%d",ang3);
    return 0;
}