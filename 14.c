#include <stdio.h>
void message(void);  //prototype
int getSimpleInterest(void);
int main(){
    message();      //function calling

    return 0;
}

int getSimpleInterest(void)
{
    int P, R, T;
    printf("enter P, R and T: ");
    scanf("%d%d%d", &P,&R,&T);
    return(P*R*T)/100;
}

void message(void){                                //function definition
    printf("welcome in c programming!!!!");        //function definition
}