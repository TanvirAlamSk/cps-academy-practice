#include<bits/stdc++.h>
using namespace std;

//   https://www.spoj.com/problems/QUEUEEZ/

int main(){
    int i,n,ty,x;
    cin>>n;

    queue<int>qu;

    for(i=0;i<n;i++){
        cin>>ty;
        if(ty==1){
            cin>>x;
            qu.push(x);
        }else if(ty==2){
            if(!qu.empty()){
                qu.pop();
            }
        }else{
            if(qu.empty()){
                cout<<"Empty!"<<endl;
            }else{
                cout<<qu.front()<<endl;
            }
        }
    }



    return 0;
}
