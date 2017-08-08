/*************************************************************************
	> File Name: SearchTwo.c
	> Author: 
	> Mail: 
	> Created Time: Wed 19 Jul 2017 02:59:27 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char Str(const char *st){
    unsigned char Arr[255];
    memset(Arr,0,256);
    while(*st!='\0'){
        Arr[*(st++)]++;
    }
    for(int i=0;i<256;i++){
        if(Arr[i]==2)
            return i;
    }
}
int main()
{
    const char p[]="abcdefabcdefabc";
    printf("%c\n",Str(p));
    return 0;
}
