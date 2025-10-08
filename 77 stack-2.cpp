#include<bits/stdc++.h>
using namespace std;

// https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP2_2_A

int main(){
    int i,n,ty,t,x,q;
    cin>>n>>q;

    stack<int>st[n];

    for(i=0;i<q;i++){
        cin>>ty;
        if(ty==0){
            cin>>t>>x;
            st[t].push(x);
        }else if(ty==1){
            cin>>t;
            if(!st[t].enpty()){
                cout<<st[t].top()<<endl;
            }
        }else{
            cin>>t;
            if(!st[t].empty()){
                st[t].pop();
            }
        }
    }


    return 0;
}
