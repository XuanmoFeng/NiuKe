/*************************************************************************
	> File Name: LingCount.c
	> Author: 
	> Mail: 
	> Created Time: Fri 21 Jul 2017 11:30:57 AM CST
 ************************************************************************/

#include<stdio.h>
int Count(const int num){
    int i=1;
    int sum=1;
    while(i<=num)
        sum*=i++;
    i=0;
    while(sum%10==0){
        sum/=10;
        i++;
    }
    return i;
}
int main(){
    printf("%d",Count(10));
return 0;
}
