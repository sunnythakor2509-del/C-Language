#include<stdio.h>
int main(){
    float p,r,t;
    float si;
    printf("Enter principal amount :");
    scanf("%f",&p);
    printf("Enter Rate :");
    scanf("%f",&r);
    printf("Enter time :");
    scanf("%f",&t);

    si =(p*r*t)/100;
    printf("Simple interest = %.2f",si);
    return 0;
}