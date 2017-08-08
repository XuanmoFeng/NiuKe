/*************************************************************************
	> File Name: QuetoS.cpp
	> Author: 
	> Mail: 
	> Created Time: Wed 19 Jul 2017 11:22:59 AM CST
 ************************************************************************/

#include<iostream>
#include<queue>
using namespace std;
class QueTos{
public:
    void appendHead(int &);
    int deleteHead();
private:
    queue<int > q1;
    queue<int> q2;
};
void QueTos::appendHead(int & co){
    q1.push(co);
}
int QueTos::deleteHead(){
    int m;
    if(q2.size()<=0){
        while(q1.size()!=1){
            int tmp=q1.front();
            q2.push(tmp);
            q1.pop();
        }
        m=q1.front();
        q1.pop();
    }
    else{
        while(q2.size()!=1){
            int tmp=q2.front();
            q1.push(tmp);
            q2.pop();
        }
        m=q2.front();
        q2.pop();
    }
    return m;
}
int main(){
    QueTos s1;
    for(int i=0;i<10;i++){
        s1.appendHead(i);
    }
    for(int i=0;i<10;i++){
        cout<<s1.deleteHead();
    }
    return 0;
}

