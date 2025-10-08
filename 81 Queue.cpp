#include<bits/stdc++.h>
using namespace std;

//   https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP2_2_B

int main(){
    int i,n,ty,t,x,q;
    cin>>n>>q;

    queue<int>qu[n];

    for(i=0;i<q;i++){
        cin>>ty;
        if(ty==0){
            cin>>t>>x;
            qu[t].push(x);
        }else if(ty==1){
            cin>>t;
            if(!qu[t].empty()){
                cout<<qu[t].front()<<endl;
            }
        }else{
            cin>>t;
            if(!qu[t].empty()){
                qu[t].pop();
            }
        }
    }


    return 0;
}
