#include<stdio.h>
int main(){
    int x,i;
    printf("Enter a number:");
    scanf("%d",&x);
    
    int count=0;
    if (x<2){
        printf("It is not a prime number and %doperations performed\n",count);

    }
    else {
        for(i=2;i<x;i++){
            count++;
            if((x%i)==0){
                printf("%d is not a prime number\n",x);
                return 0;
            }
        }
        printf("The number: %d is a prime number and check counts:%d",x,count);
    }
    return 0;

}