#include<stdio.h>
int main()
{
    int n,sum;
    printf("enter the value of n:");
    scanf("%d",&n);
    int last=n%10;
    printf("last digit:%d\n",last);
    int first=n;
    while(first>=10){
        first=first/10;

    }printf("first digit:%d\n",first);

    sum=last+first;
    printf("sum of last digit and first is:%d\n",sum);
}