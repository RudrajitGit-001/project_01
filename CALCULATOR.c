#include<stdio.h>
int main(){
    int choice;
    float a,b;
    while(1){
        printf(" = =CALCULATOR = =\n");
        printf("1.Addition\n");
        printf("2.Substraction\n");
        printf("3.Multiplication\n");
        printf("4.Division\n");
        printf("5.Exit\n");
        printf("Enter your choice:");
        scanf("%d",&choice);

                
        if(choice==5){
            printf("Exited Calculator");
            break;
        }
        
        printf("Enter a:");
        scanf("%f",&a);
        printf("Enter b:");
        scanf("%f",&b);

        switch(choice){
            case 1:
            printf("Addition:%f\n",a+b);
            break;

            case 2:
            printf("Substraction:%f\n",a-b);
            break;

            case 3:
            printf("Multiplication:%f\n",a*b);
            break;

            case 4:
                if (b==0){
                    printf("B cannot be Zero\n");
                }
                else{
                    printf("Division:%.2f\n",a/b);
                }
                break;        

            default:
            printf("Invalid entry\n");
            break;
  
            }
            
        }
    return 0;
}