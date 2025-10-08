
#include<bits/stdc++.h>
using namespace std;

//  https://www.geeksforgeeks.org/problems/deque-implementations/1

int main(){
    int i,q,u;
    cin>>q;

    deque<int>dq;
    string ty;

    for(i=0;i<q;i++){
        cin>>ty;
        if(ty=="pb"){
            cin>>u;
            dq.push_back(u);
        }else if(ty=="pf"){
            cin>>u;
            dq.push_front(u);
        }else if(ty=="pp_b"){
            dq.pop_back();
        }else{
            cout<<dq.front()<<endl;
        }
    }

    return 0;
}
