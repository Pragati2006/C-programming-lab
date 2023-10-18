#include<stdio.h>
#include<math.h>
void main(){
    int num,sum=0,r,l=0,num1;
    printf("enter the number");
    scanf("%d",&num);
    num1=num;
    while(num>0){
        l++;
        num=num/10;
    }num=num1;
    while(num>0){
        r=num%10;
        sum=sum+(r*r*r);
        num=num/10;
    }if(num1==sum){
        printf("the given no. is armstrong");
    }else{
        printf("the given no. is not armstrong");
    }
