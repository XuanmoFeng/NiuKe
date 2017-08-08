/*************************************************************************
	> File Name: Replace.c
	> Author: 
	> Mail: 
	> Created Time: Tue 18 Jul 2017 07:59:32 AM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void Replac(char* str,int length){
    char*tmp=str+length-1;
    char *de=malloc(2*length+1);
    de[2*length]='\0';
    int j=2*length-1;
    int i=0;
    while(length>0){
        if(*tmp==' '){
            de[j-(i++)]='$';
            de[j-(i++)]='$';
            de[j-(i++)]='$';
        }else{
            de[j-(i++)]=*tmp;
        }
        tmp--;
        length--;
    }
    strcpy(str,de+j-i+1);
    free(de);
    de=NULL;
}

int main(){
    char se[]="we are alone";
    int sz=sizeof(se)/sizeof(char)-1;
    Replac(se,sz);
    printf("%s",se);
    return 0;
}
