#include<stdio.h>

int main(){
    int num,count,rem;
    printf("enter num:");
    scanf("%d",&num);     
    count=0;
    while(num>0)
    {
        rem=num%10;
        count++;
        num=num/10;
    }
        printf("%d",count);
    

    return 0;
}