#include<stdio.h>
int hexa(char arr[],int n);
int main(){
    int x;
    char hex[100];
    printf("Enter a decimal number:");
    scanf("%d",&x);
    hexa(hex,x);
    return 0;

}
int hexa(char arr[],int n){
    int j,i=0;
    int rem;
    while(n>0){
        rem=n%16;
        if(rem<10){
            arr[i]=rem+48;
        }
        else{
            arr[i]=rem+55;
        }
        n=n/16;
        i++;
    }
    printf("Hexadecimal number is=");
    for(j=i-1;j>=0;j--){
        printf("%c",arr[j]);
    }
}