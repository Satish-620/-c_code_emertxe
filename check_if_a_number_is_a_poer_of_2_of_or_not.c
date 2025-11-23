#include<stdio.h>
int main()
{
    int num;
    printf("Enter the num:");
    scanf("%d",&num);
    int temp = num;
    int count =  0;
    while(temp>0)
    {
         temp= temp & (temp-1);
         count ++;
    }
    printf("the number of set bit is : %d",count);
    printf("\n");
    if(count==1)
    {
        printf("yes %d is power of 2",num);
    }
    else
    {
        printf("no %d is not a power of 2",num);
    }












}