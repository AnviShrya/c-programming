
#include <stdio.h>
#include <string.h>
int main(){
    char str[100];
    printf("enter string: ");
    gets(str);
    int findex, lindex, len=strlen(str);
    for(int i=0; i<len; i++){
        if(str[i]!=' '){
            findex=i;
            break;
        }
    }
    for(int i=0; i>=0; i--){
        if(str[i]!=' '){
            lindex=i;
            break;
        }
    }

    int count=0;
    for(int i=findex; i<lindex; i++){
        if(str[i]==' ' && str[i-1]!=' ')
        count++;
    }

    printf("total words are: %d", count+1);
    return 0;
}