#include <stdio.h>

int main(){
    int number1, number2, number3, total= 0;
    float average = 0;
    printf("First Number");
    scanf("%d", &number1);
    printf("Second Number");
    scanf("%d", &number2);
    printf("Third Number");
    scanf("%d", &number3);
    total = number1 + number2 + number3;
    average = total/3;
    printf("Average....:%2.f", average);
    return 0;
}