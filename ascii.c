#include<stdio.h>
#include<conio.h>

void main(){
    char c =64;
    int i;
    for(i=0; i<=255; i++){
        c=i;
        printf("%d : %c ", i,c);
    }
    
    // char a=65, b=77, f=82, d=73, e=78;
   // printf("%c %c %c %c %c",a,b,f,d,e);
}