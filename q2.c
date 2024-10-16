#include<stdio.h>
int main(){
    int n;
    float s,temp,k;
    printf("Enter a integer in n: ");
    scanf("%d",&n);
    printf("Enter a float in s: ");
    scanf("%f",&s);
    k=s-(int)s;
    temp=n;
    n=s;
    s=temp;
    printf("The value of n is %f and the value of s is %f",(float)n+k,s);
    return 0;
}