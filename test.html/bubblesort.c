    #include<stdio.h>    
    void main ()    
    {    
        int i, j,temp;     
        int a[5] = { 10, 9, 7, 101, 23};     
        for(i = 0; i<5; i++)    
        {    
            for(j = 0; j<5; j++)    
            {    
                if(a[j] > a[j+1])    
                {    
                    temp = a[j];    
                    a[j] = a[j+1];    
                    a[j+1] = temp;     
                }     
            }     
        }     
        printf("Printing Sorted Element List ...\n");    
        for(i = 0; i<5; i++)    
        {    
            printf("%d\t",a[i]);    
        }    
    }     