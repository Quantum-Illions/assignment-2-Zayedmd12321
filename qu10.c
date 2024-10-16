#include<stdio.h>
int main(){
    int a,b;
    char c;
    printf("Enter 1st num: ");
    scanf("%d",&a);
    printf("Enter 2nd num: ");  
    scanf("%d",&b);
    printf("Enter the character you want to perform operation(+,-,*,/): ");
    scanf(" %c",&c);
    switch (c)
    {
    case '+':
        printf("%d",a+b);
        break;
    case '-':
        printf("%d",a-b);
        break;
    case '*':
        printf("%d",a*b);
        break;
    case '/':
        printf("%d",a/b);
        break;
    default:
        printf("Invalid input");
    }
    return 0;
}