//WAP TO CHECK WHETHER A STRING IS A PALINDROME O NOT

#include <stdio.h>
#include <string.h>
int main(){
    char str[30], temp[30];
    printf("enter string: ");
    gets(str);
    strcpy(temp, str);
    strrev(str);
    if(strcmp(temp, str)==0)
    printf("string is pallindrome");
    else
    printf("not pallindrome");
    return 0;
}