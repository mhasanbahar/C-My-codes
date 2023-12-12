#include<stdio.h>

int gather(int, int);//There is a return declaration
void message();//There is no return statement
int control();
int control_1();

int main(){
    int s1, s2, total = 0, cntrl;
    printf("First Number...:");
    scanf("%d", &s1);
    printf("Second Number..:");
    scanf("%d", &s2);
    total = gather(s1, s2);
    printf("Total...:%d\n", total);
    message();
    cntrl = control_1();
    if(cntrl == 0){
        printf("Even..");
    }
    else{
        printf("Odd..");
    }
    return 0;
}

int gather(int sy1, int sy2){
    int t_value = sy1+ sy2;
    return t_value; 
}

int control_1(){
    int t_bill = 0, s1, s2;
    t_bill = gather(s1, s2);
    if(t_bill % 2 == 0){
        return 0;
    }
    else{
        return 1;
    }
}

int control(){
    int number;
    printf("\nEnter the number...:");
    scanf("%d", &number);
    if(number % 2 == 0){
        return 0;
    }
    else{
        return 1;
    }
}

void message(){
    printf("  ");
}