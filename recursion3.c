#include<stdio.h>
int f(int n)
{
    if(n<=1)
    return 1;
    if(n%2==0)
    
    return f(n/2);

}
int main()
{
    printf("%d",f(10));
    return 0;
}