#include<stdio.h>
float area_of_national_flag(float b)
{
    float p,q;
    p=(10*b)/5;
    printf("%.2f\n",p);
    float area=p*b;
    return area;
}
int main(){
float y;
printf("enter the value of y:");
scanf("%f",&y);


float area=area_of_national_flag(y);

printf("%.2f",area);
}