#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter first number");   
    scanf("%d",&a);
    printf("enter second number");
    scanf("%d",&b);
    printf("enter third number");

    scanf("%d",&c);     
    // This program finds the greatest of three numbers
    // It compares the three numbers and prints the greatest one
    // If a is greater than both b and c, it prints a
    // If b is greater than both a and c, it prints b
    if(a>b && a>c){
        printf("greatest number is %d",a);
    }        
    else if(b>a && b>c){
        printf("greatest number is %d",b);
    }
    else{
        printf("greatest number is %d",c);
    }
return 0;
}