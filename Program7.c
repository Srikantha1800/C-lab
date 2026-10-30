#include<stdio.h>
int main(void)
{
    int unites;
    double bill;
    printf("enter electricity unites consumed:");
    scanf("%",&unites);

    if(unites<0)
    {
        printf("unites cannot be negative.\n");
        return 0;
    }
    if (unites<=50)
    bill=unites*1.50;
    else if (unites<=150)
    bill=50*1.50+(unites-50)*2.50;
    else if(unites<=250)
    bill=50*1.50+100*2.50+(unites-150)*4.00;
    else 
    bill=50*1.50+100*2.50+100*4.00+(unites-250)*6.00;
    bill=bill+100.00;
        printf("electicity bill=RS.%2lf\n",bill);
    return 0;    
}
