#include <stdio.h>
#include <stdlib.h>
void swap(int,int);
void swapWPtr(int*,int*);

int main()
{
    int num1;
    int num2;
    printf("enter number1 :\n");
    scanf("%d",&num1);
    printf("enter the number2 :\n");
    scanf("%d",&num2);
    swap(num1,num2);
    printf("before swap\n number1: %d number2: %d\n",num1,num2);
    swapWPtr(&num1,&num2);
    printf("after swapWptr\n number1: %d number2: %d",num1,num2);
    return 0;
}

void swap(int x,int y) //call by value
{
    int temp=x;
    x=y;
    y=temp;
}


void swapWPtr(int *x,int *y) //call by reference
{
    int temp=*x;
    *x=*y;
    *y=temp;
}

