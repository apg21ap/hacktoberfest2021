//program to find factors of a number
#include<stdio.h>
int main() {
    int n,i;
    printf("enter the vale of n\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        printf("factors are %d\n",i);
    }
}