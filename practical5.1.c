include<stdio.h>
int main(){
    int n;
    printf("enter the number");
    scanf("%d",&n);
    int c=0,i=2;
    while(i<=n/2){
        if(n%i==0){
            i++;
            c=1;
            break;
    }}
    if(n==1){
    printf("1 is neither prime nor composite");}
    else if (c==0){
    printf("%d is a prime number",n);}
    else{printf("%d is a composite number",n);}
    return 0;
}
