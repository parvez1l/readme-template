#include<stdio.h>
int main(){
    int a=20,b=10,c,d;
    c=++a-b;
    d=b++ +a;
    printf("a=%d b=%d c=%d d=%d",a,b,c,d);
    printf("\n%d",(c>d)?c:d);
}