#include <stdio.h>

int main(){
    int i;
    printf("Enter A Number.....:");
    scanf("%d",&i);
    if(i % 2 ==0){
        printf("The number is even");
    }
    else{
        printf("The number is odd");
    }
    return 0;
}