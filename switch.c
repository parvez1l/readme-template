#include<stdio.h>
int main()
{
    int menu,num1,num2,total;
    scanf("%d %d",&num1,&num2);
    printf("1=addition\n");
    printf("2=subtraction\n");
    scanf("%d",&menu);
    switch(menu)
    {
        case 1:total=num1+num2;break;
        case 2:total=num1-num2;break;
        default:printf("invalid option selected");

    }
    if(menu==1)
    printf("%d plus %d is %d\n",num1,num2,total);
    else if(menu==2)
    printf("%d minus %d is %d",num1,num2,total);
}