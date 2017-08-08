/*************************************************************************
	> File Nmatrixme: PrintM.c
	> matrixuthor: 
	> Mmatrixil: 
	> Crematrixted Time: Thu 20 Jul 2017 04:39:33 PM CST
 ************************************************************************/

#include<stdio.h>
void Print(int (*matrix)[5],int length){
    int i,j;
    int k,m;
    m=0;
    for(k=0;k<3;k++){
        length=length-k;
        for(i=k;i<length-k-1;i++)
            printf("%d ",matrix[k][i]);
        for(m=k+1;m<length;m++)
            printf("%d ",matrix[m][i]);
        for(m-=2;m>=k;m--)
            printf("%d ",matrix[i][m]);
        for(m=i-1;m>k;m--)
            printf("%d ",matrix[m][k]);
    }
}
int main(){
    int matrix[5][5]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25};
    Print(matrix,5);
    return 0;
}
