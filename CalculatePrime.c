#include <stdio.h>

int main(){
    int i = 1, counter = 0, number;
    printf("Enter Number..:");
    scanf("%d", &number);
    for (i = 1; i <= number; i++)
    {
        if(number % i == 0){
            counter++;
        }
    }
    if(counter == 2){
        printf("Number is Prime");
    }
    else{
        printf("Number is Not Prime");
    }
    return 0;
}