#include<stdio.h>

int DecToBin(int num){
    int rem=0;
    if(num==0){
    printf("%d",num);}
    else{
    rem=num%2;
    DecToBin(num/2);
    printf("%d",rem);}

}
int main(){
    int i=6;
    DecToBin(i);
    return 0;

}