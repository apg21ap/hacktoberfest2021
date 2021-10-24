/*input user id then input number of units cnsumed the calculate bill using :
   unis <=200 = 0.8
        >200 <=300 = (0.9*more)
        >300 = 0.8*more
        +100 in bill as metre charges. if bill is more than 400 than add 15% of it in exisiting bill.*/
#include<stdio.h>
int main() {
    char i[20];
    float u,a,x;
    printf("enter the username\n");
    scanf("%s",i);
    printf("enter the number of units\n");
    scanf("%f",&u);
        if(u<=200)
        {
            a = (u*0.8);
        }
        else if(u>200 && u<=300)
        {
            x = u-200;
            a = (0.8*200) + (x*0.9);
        }
        else
        {
            x = u-300;
            a = (0.8*200) + (0.9*100) + (x*0.8);
        }
    a = a + 100;
        if(a>400)
        {
            a = (0.15*a) + a;
        }
    printf("the total bill of %s is of %.1f\n",i,a);
}