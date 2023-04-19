#include <stdio.h>
int add(int x,int y){
    return (x+y);
}
int main()
{
    int a,b;
    printf("Enter first number:\n");
    scanf("%d",&a);
    printf("Enter second number:\n");
    scanf("%d",&b);
    int sum = add(a,b);
    printf("Sum is : %d",sum);
    return 0;
}
