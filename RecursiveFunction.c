#include <stdio.h>

int factorNorm(int);
int functionRecursive(int);

int functionRecursive(int y){
    if(y == 0){
        return 1;
    }
    else if (y == 1)
    {
        return 1;
    }
    else{
        return y * functionRecursive(y-1);
    }
}
int main(){
    int rt_value, number, rt_value_f;
    printf("Enter number...:");
    scanf("%d", &number);

    rt_value_f = functionRecursive(number);
    printf("Recursive Function...:%d",rt_value_f);
    return 0;
}