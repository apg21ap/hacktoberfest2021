//program to find prime nmbers between a given number and 100
#include<stdio.h>
int main() {
    int n,x,y;
    printf("enter the number n\n");
    scanf("%d",&n);
    printf("prime numbers between %d and 100 are\n",n);
    while(n < 100)
    {
        y = 0;
        for(x = 2;x<=n/2;x++)
        {
            if(n % x == 0)
            {
                y = 1;
                break;
            }
        }
        if(y == 0)
        {
            printf("%d\n",n);
        }
        n++;
    }
}