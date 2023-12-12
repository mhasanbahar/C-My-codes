#include <stdio.h>

int factorNorm(int);

int factorNorm(int x){
    int f_value = 1, i;
    for (i = 1; i <= x; i++)
    {
        f_value = f_value * i;
    }
     return f_value;
}

int main(){
    int rt_value, number;
    printf("Enter number...:");
    scanf("%d", &number);
    rt_value = factorNorm(number);
    printf("Factorial...:%d", rt_value);
    return 0;
}