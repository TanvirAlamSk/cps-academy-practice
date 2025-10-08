#include<bits/stdc++.h>
using namespace std;

// https://toph.co/p/neat-brackets

int main() {
    int i,len;
    string str;
    cin>>str;

    stack<char>st;

    len=str.length();

    for(i=0; i<len; i++) {
        if(str[i]=='(') {
            st.push('(');
        } else {
            if(st.top()=='(') {
                st.pop();
            }else{
                st.push(')');
                break;
            }
        }
    }


    if(st.empty()){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }

    return 0;
}
