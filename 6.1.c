#include<stdio.h>
int main(){
    int arr[10]={1,3,5,9,21,36,90,12,42,45};
    int n;
    int max=arr[0];
    printf("Enter the size of array:-");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    printf("%d",max);
    return 0;
}
