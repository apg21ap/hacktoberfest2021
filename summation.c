//program for summation of series 1/i
#include<stdio.h>
int main() {
    float i,n,s,a=0;
    printf("enter the value of n\n");
    scanf("%f",&n);
    for(i=1;i<=n;i++)
    {
        s = 1/i;
        printf("%f \n",s);
        a = a + s;
    }
    printf("the sum is %f\n",a);
}