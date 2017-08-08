/*************************************************************************
	> File Name: bitcount.c
	> Author: 
	> Mail: 
	> Created Time: Sat 15 Jul 2017 10:18:50 AM CST
 ************************************************************************/

#include<stdio.h>
int Nummberof1(int n){
    int temp=n;
    int count=0;
    int i=1;
    while(i!=0){
        if(temp&i){
            count++;
        }
        i=i<<1;
    }
    return count;
}
int main(){
    int m=Nummberof1(3);
    printf("%d",m);
}
