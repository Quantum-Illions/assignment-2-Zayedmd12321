#include<stdio.h>
int main(){
    const float pi=3.14159;
    float r,area;
    printf("Enter the radius of the circle: \n");
    scanf("%f",&r);
    area=pi*r*r;
    printf("The area of the circle is: %f",area);
    return 0;
}