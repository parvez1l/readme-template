#include<stdio.h>
int main(){
    char choice='W';
    switch(choice){
        case 'R':
        printf("Red");
        break;
        case 'W':
        printf("white");
        break;
        default:
        printf("black");
    }
}