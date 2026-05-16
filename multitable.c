#include<stdio.h>
int multi(int n);
int main(){
    int x;
    printf(" == MULTIPLICATION TABLE == \n");
    printf("Enter the Number For Multiplication table:");
    scanf("%d",&x);
    multi(x);
    return 0;

}
int multi(int n){
    for (int i=1;i<=10;i++){
        int mul=n*i;
        printf("%d x %d = %d\n",n,i,mul);
        
    }
}