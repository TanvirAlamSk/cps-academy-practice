#include<bits/stdc++.h>
using namespace std;

//   https://www.geeksforgeeks.org/problems/reverse-first-k-elements-of-queue/1

int main(){
    int i,n,k,u;
    cin>>n>>k;

    stack<int>st;
    queue<int>qu;

    for(i=0;i<k;i++){
        cin>>u;
        st.push(u);
    }

    for(i=0;i<n-k;i++){
        cin>>u;
        qu.push(u);
    }

    for(i=0;i<k;i++){
        cout<<st.top()<<" ";
        st.pop();
    }

    for(i=0;i<n-k;i++){
        cout<<qu.front()<<" ";
        qu.pop();
    }

    cout<<endl;

    return 0;
}
