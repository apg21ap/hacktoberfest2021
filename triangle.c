//to check that the given sides are the sides of the right angled triangle
#include<stdio.h>
int main() {
    int a,b,c;
    printf("enter the first side\n");
    scanf("%d",&a);
    printf("enter the second side\n");
    scanf("%d",&b);
    printf("enter the third side\n");
    scanf("%d",&c);
    if((a*a)==(b*b)+(c*c))
    printf("these are the sides of the right angled triangle\n");
    else if((b*b)==(c*c)+(a*a))
    printf("these are the sides of the right angled triangle\n");
    else if((c*c)==(a*a)+(b*b))
    printf("these are the sides of the right angled triangle\n");
    else
    printf("these are not the sides of the right angled triangle\n");
}