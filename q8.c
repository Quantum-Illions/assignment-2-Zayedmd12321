#include<stdio.h>
int main(){
    int n;
    label:
    printf("Enter a positive number: ");
    scanf("%d",&n);
    if(n<=0)
        goto label;
    return 0;
}