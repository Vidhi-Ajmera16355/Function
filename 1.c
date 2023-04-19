#include <stdio.h>
void greet(){
    printf("Good Morning\n");
    printf("How are you ? \n");
    return;
}
int minimum(int a,int b){
    int min =a;
    if (b<a) min=b;
    return min;
}
int main()
{
    greet();
    greet();
    int a,b;
    printf("Enter two numbers:\n");
    scanf("%d %d",&a,&b);
    int m=minimum(a,b);
    printf("%d",m);
    return 0;
}
