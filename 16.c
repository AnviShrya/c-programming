//WAP TO FIND THE CUBE OF ANY NUMBER USING FUNCTION

#include <stdio.h>
void cube_1(void);
int main(){
    cube_1();
}
void cube_1(void){
    int num1,cube;
    printf("enter a number: ");
    scanf("%d", &num1);
    cube=num1*num1*num1;
    printf("Area1= %d", cube);
}
//no argument but with return type
int cube_2(void){
    int num,cub;
    printf("enter number: ");
    scanf("%d", &num);
    cub=num*num*num;
    return cub;
}
int main(){
    int cb=cube_2(2);
    printf("%d",cb);
    return 0;
}
//argument but no return 

void cube_3(int a){
    int cub=a*a*a;
    printf("%d",cub);
    }
    int main(){
        int n;
        printf("enter number:");
        scanf("%d",&n);
        int x=cube_4(n);
        cube_3(n);
        printf("%d",x);
        return 0;
    }
    

//argument and return type
int cube_4(int a){
    return(a*a*a);
}



