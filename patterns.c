#include<stdio.h>
#include<conio.h>

int pattern1(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(i==1||i==n||j==1||j==n){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }

    return 1;
}

void main(){
    int n;
    printf("Please Enter the star value:");
    scanf("%d", &n);
    printf("%d", pattern1(n));
}