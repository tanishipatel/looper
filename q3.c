#include<stdio.h>

int main(){
    int sum,rem,num;
    printf("enter num:");
    scanf("%d",&num);
    sum=0;
    while(num>0)
    {
        rem=num%10;
        sum=sum+rem;
       num =num/10;
    }
    printf("%d",sum);
 
 
 
 
    return 0;   
}