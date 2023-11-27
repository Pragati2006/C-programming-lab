#include<stdio.h>
void swapbyval(int a,int b){
    int temp=a;
    a=b;
    b=temp;
    printf("\na=%d and b=%d",a,b);
}
void swapbyref(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int num1,num2;
    printf("Enter two numbers\n");
    scanf("%d%d",&num1,&num2);
    printf("num1=%d",num1);
    printf("\nnum2=%d",num2);
    swapbyval(num1,num2);
    printf("\nnum1=%d",num1);
    printf("\nnum2=%d",num2);
    swapbyref(&num1,&num2);
    printf("\nnum1=%d",num1);
    printf("\nnum2=%d",num2);
}
