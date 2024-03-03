#include<stdio.h>
int toUppercase(char small_letter){
    int upper_letter=small_letter-32;
    return upper_letter;

}
int main()
{
    char lowercase;
    printf("enter the value of lowercase:");
    scanf("%c",&lowercase);
    int uppercase=toUppercase(lowercase);
    printf("%c",uppercase);
}