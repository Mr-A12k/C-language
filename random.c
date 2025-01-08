#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<unistd.h>
#include<time.h>

int main(){
    srand(time(NULL)*getpid());
    int rand_val=rand();
    int pid = getpid();
    printf("a:%d \n",rand_val);
    printf("b:%d \n",pid);
    

    return 0;
}


//this  is the script for run the code for N times
// in this case 5 times

/*

bash script.sh
.\random.exe
.\random.exe
.\random.exe
.\random.exe
.\random.exe

*/