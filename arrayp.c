#include<stdio.h>
int main(){
    int i,j,temp;
    int a[5]={2,1,4,3,7};
    for(i=0;i<5-1;i++){
        int flag=0;
        for(j=0;j<5-1-i;j++){
            if(a[j]<a[j+1]){
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
            flag=1;}
        }
        if(flag==0)
        break;
    }
    for(i=0;i<5;i++){
        printf("%d\t",a[i]);
    }
}