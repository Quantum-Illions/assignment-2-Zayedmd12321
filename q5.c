#include<stdio.h>
int main(){
    int marks;
    printf("Enter your marks: \n");
    scanf("%d",&marks);
    if(marks>=40)
        printf("Pass");
    else
        printf("Fail");
    return 0;
}