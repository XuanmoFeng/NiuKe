/*************************************************************************
	> File Name: VStack.cpp
	> Author: 
	> Mail: 
	> Created Time: Wed 19 Jul 2017 11:49:03 AM CST
 ************************************************************************/

#include<iostream>
#include<stdlib.h>
using namespace std;
template<typename T>
class Sta{
public:
    Sta()
        :com(20)
        ,s(0)
        ,min(0)
    {
        Arr=(T*)malloc(sizeof(T)*com);
    }
    void Push(const T&ele){
        if(min>ele)
        {
            min=ele;
        }
        if(com>=s){
            Arr[s]=ele;
            s++;
        }
        else{
            com*=2;
            T*tem=(T*)malloc(sizeof(T)*com);
            for(int i=0;i<s;i++){
                tem[i]=Arr[i];
            }
            free(Arr);
            Arr=NULL;
            Arr=tem;
        }
    }
    void Pop(){
        if(s>0){
            cout<<Arr[--s];
        }
    }
    int Min(){
        return min;        
    }
private:
    T* Arr;
    unsigned int s;
    unsigned int com;
    int min;

};

int main(){

    Sta<int > l;
    for(int i=0;i<10;i++){
        l.Push(i);
    }
        l.Push(-1);
    cout<<endl;
    for(int i=0;i<10;i++){
        l.Pop();
    }
    return 0;
}
