/*************************************************************************
	> File Name: SortJiOu.c
	> Author: 
	> Mail: 
	> Created Time: Thu 20 Jul 2017 02:57:47 PM CST
 ************************************************************************/

#include<stdio.h>
void ReorderOddEven(int *array,unsigned int length){
    if(array==NULL||length==0){
        return ;
    }
    int left=0;
    int right=0;
    while(left<length&&right<length){
        while(left<length&&array[left]%2==0){
            left++;
        }
        while(right<length&&array[right]%2==1){
            right++;
        }
        while(left<right){
            left++;
            while(left<length&&array[left]%2==0){
                left++;
        }
        }
        if(left<length&&right<length&&left>right){
            printf("left:%d     right:%d\n",array[left],array[right]);
            int tmp=array[right];
            array[right]=array[left];
            array[left]=tmp;
            right++;
        }
    }
    int i,j;
    while(right<length){
        for(i=right;i<length;i++)
            for(j=i+1;j<length;j++)
                if(array[i]>array[j])
                  {
                      int tmp =array[i];
                      array[i]=array[j];
                      array[j]=tmp;
                  }
        right=i;

    }
}
int main(){
    int a[]={1,2,3,4,5,6,7};
    ReorderOddEven(a,7);
    int i;
    for(i=0;i<7;i++){
        printf("%d",a[i]);
    }

    return 0;
}
