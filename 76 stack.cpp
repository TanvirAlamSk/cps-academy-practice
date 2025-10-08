#include<bits/stdc++.h>
using namespace std;

int main(){
    int i;
    stack<int>st;

    st.push(56);
    st.push(33);
    st.push(64);
    st.push(86);
    st.push(32);

    cout<<st.top()<<endl;
    cout<<st.size()<<endl;
    st.pop();

    cout<<st.top()<<endl;
    cout<<st.size()<<endl;
    st=stack<int>();

    if(st.empty()){
        cout<<"empty"<<endl;
    }else{
        cout<<"not empty"<<endl;
    }

    cout<<st.size()<<endl;

    return 0;
}
