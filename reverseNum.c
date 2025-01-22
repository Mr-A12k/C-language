#include <stdio.h>
#include <conio.h>

int reverseNum(int num)
{
    int rev = 0;
    while (num != 0)
    {
        rev = rev * 10 + num % 10;
        num = num / 10;
    }
    return rev;
}

void main(){
    int num;
    printf("Enter the number to reverse:");
    scanf("%d",&num);
    int reversedNum =reverseNum(num);
    printf("The reversed number:%d", reversedNum);
}