#include<stdio.h>
int main(){
    int i=3,j=4,k=5;
    printf("%d",i<j || ++j<k);
    printf("\n%d %d %d",i,j,k);
}