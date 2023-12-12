#include <stdio.h>

int factorNorm(int);
int fibonacciRecursive(int);

int fibonacciRecursive(int y){
    int y_conclusion;
    if(y == 0){
        return 0;
    }
    else if(y == 1){
        return 1;
    }
    else{
        return fibonacciRecursive(y-1) + fibonacciRecursive(y-2);
    }
}

int factorNorm(int x){
    int f_value = 1, i;
    for (i = 1; i <= x; i++)
    {
        f_value = f_value * i;
    }
     return f_value;
}

int main(){
    int fibo_value, fibo_sequence;

    printf("Fibonacci Sequence Number..:");
    scanf("%d", &fibo_sequence);
    fibo_value = fibonacciRecursive(fibo_sequence);
    printf("Calculated Fibonacci Value..:%d", fibo_value);
    return 0;
}