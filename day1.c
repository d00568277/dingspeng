#include<stdlib.h>
#include<stdio.h>
int main(){
    int a[4]={0,1,1,2};
    int b[4]={0,1,2,3};
    int c[4]={0};

    for (int i = 0; i < 4; i++)
    {
        c[i]=b[i]+a[i];
    }
    
    printf("HELLO WORLD!\n");
    return 0;
}