  
#include <stdio.h>
#include <stdlib.h>
#include <math.h> 
int POW(int a,int p);
int prime(int b);
int main()
{
    char a_str[10],p_str[10];
    int a,b,p;
    gets(a_str);
    gets(p_str);
    a=atoi(a_str);
    p=atoi(p_str);
    b=POW(a,p);
    printf("pow a or b : %d",b);
    prime(b);
}
int POW(int a,int p){
    return pow(a,p);
}
int prime(int b){
    if (b%2==0)
        printf("It's prime number.");
    else
        printf("Nah, It's not prime number.");
}
