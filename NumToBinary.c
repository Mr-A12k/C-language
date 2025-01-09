#include<stdio.h>
#include<conio.h>

int convertToBinary(int num){
    int bit;
    for(bit=16;bit>=0;bit--){
        printf("%d",(num>>bit)&1);
    }
    return 0;
}

void main(){
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    printf("%d\n",convertToBinary(num));
    printf("%d\n",num<<2);
}