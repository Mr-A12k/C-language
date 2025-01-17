#include<stdio.h>
#include<conio.h>

void main(){
    int a =10;
    int *p = &a;
    int **b= &p;
    *p=50;

    printf("%d\n",b);
    printf("%d\n",p);
    printf("%d\n%d\n",a,&a);

}