#include<stdio.h>

int main()
{
    char names[2][10],dummy;
    int roll_number[2],i;
    float marks[2];
    for(i=0;i<3;i++)
    {
        printf("enter the name,roll_number,and marks of student %d",i+1);
        scanf("%s%d%f",&names[i],&roll_number[i],&marks[i]);
        scanf("%c",&dummy);

    }
    printf("printing the stdudent details...\n");
    for(i=0;i<3;i++){
        printf("%s%d%f\n",names[i],roll_number[i],marks[i]);
    }
}