#include<stdio.h>
int main()
{
    int a[5]={1,2,6,4,5};
    int check=1;
    for(int i=0;i<5;i++){
        if(a[i]+check==4)
        printf("here 3 is exit\n");
        else
        break;
        

        
    }printf("here 3 is not exist\n");

}