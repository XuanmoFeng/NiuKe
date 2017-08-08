/*************************************************************************
	> File Name: Shucount.c
	> Author: 
	> Mail: 
	> Created Time: Thu 20 Jul 2017 04:01:10 PM CST
 ************************************************************************/

#include<stdio.h>
int GetNumberOfK(int *data,int k,int length){
    if(data==NULL)
        return 0;
    int count=0;
    int i;
    for(i=0;i<length;i++){
        if(k==data[i]){
            count++;
            if(i+1<length&&k!=data[i+1])
                return count;
        }
    }
    return count;
}
int main(){
    int a[]={1,2,3,3,4,5,5,6,6,7,7,7,8,8};
    int length=sizeof(a)/sizeof(int);
    int i;
    i=GetNumberOfK(a,7,length);
    printf("%d",i);
    
    return 0;
}
