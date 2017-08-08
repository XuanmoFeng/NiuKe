/*************************************************************************
	> File Name: StoQue.c
	> Author: 
	> Mail: 
	> Created Time: Wed 19 Jul 2017 09:35:37 AM CST
 ************************************************************************/

#include<iostream>
#include<stack>
using namespace std;
class Qu{
public:
    void appendTail(int &el);
    int   deleteHead();
private:
    stack<int > s1;
    stack<int > s2;
};
void Qu::appendTail(int &el){

        s1.push(el);
};
int Qu::deleteHead(){
    if(s2.size()<=0)
    while(s1.size()>0){
        int tmp =s1.top();
        s1.pop();
        s2.push(tmp);
    }
        int m=s2.top();
        s2.pop();
    return m;
};
int main(){
    int i=0;
    Qu l;
    for(;i<10;i++)
        l.appendTail(i);
    for(i=0;i<10;i++)
        cout<<l.deleteHead();
    return 0;
}
