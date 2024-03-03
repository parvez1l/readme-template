#include<stdio.h>
void func(int n)
{
    if(n==0)
    return;
    printf("%d",n%2);
    func(n/2);

}
int main(){
    int n=6;
    func(n);
}