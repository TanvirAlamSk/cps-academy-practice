#include<bits/stdc++.h>
using namespace std;

int main(){
    int i;
    deque<int>dq;

    dq.push_back(12);
    dq.push_back(34);
    dq.push_back(65);
    dq.push_front(32);
    dq.push_front(78);
    dq.push_front(86);

    cout<<dq.size()<<endl;
    for(int it:dq){
        cout<<it<<" ";
    }
    cout<<endl;

    cout<<"Front "<<dq.front()<<endl;
    cout<<"Last "<<dq.back()<<endl;

    dq.pop_back();
    cout<<dq.size()<<endl;
    for(int it:dq){
        cout<<it<<" ";
    }
    cout<<endl;

    dq.pop_front();
    cout<<dq.size()<<endl;
    for(int it:dq){
        cout<<it<<" ";
    }
    cout<<endl;

    if(dq.empty()){
        cout<<"Empty"<<endl;
    }else{
        cout<<"Not Empty"<<endl;
    }

    dq.clear();

    if(dq.empty()){
        cout<<"Empty"<<endl;
    }else{
        cout<<"Not Empty"<<endl;
    }


    return 0;
}
