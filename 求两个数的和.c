/*************************************************************************
	> File Name: l.c
	> Author: 
	> Mail: 
	> Created Time: Fri 14 Jul 2017 09:05:35 PM CST
 ************************************************************************/

#include<stdio.h>

int Add(int num1, int num2)
{
    int sum=0;
    while(num2!=0){
        sum=num1^num2; 
        num2=num1&num2;
        num2<<=1;
        num1=sum;
    }
    return sum;
}
int main()
{
    printf("%d\n",Add(12,22));
    return 0;
}
