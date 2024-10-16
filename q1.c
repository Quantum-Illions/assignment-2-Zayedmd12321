#include <stdio.h>
int count=0,local=10;
int counting(){
    count++;
    return 0;
}
int main() {
    int local=100;
    counting();
    counting();
    counting();
    counting();
    counting();
    printf("%d times function is called",count);
    printf("%d is printed bcoz of local variable and not 10",local);
    return 0;
}