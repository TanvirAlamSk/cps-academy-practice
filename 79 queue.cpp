#include<bits/stdc++.h>
using namespace std;

int main(){
    int i;
     queue<int> qu;

     qu.push(78);
     qu.push(47);
     qu.push(34);
     qu.push(46);
     qu.push(42);
     qu.push(67);

     cout<<qu.front()<<endl;

     if(qu.empty()){
        cout<<"Empty"<<endl;
     }else{
         cout<<"Not Empty"<<endl;
     }

     qu=queue<int>();

     cout<<qu.size()<<endl;
     if(qu.empty()){
        cout<<"Empty"<<endl;
     }else{
         cout<<"Not Empty"<<endl;
     }

    return 0;
}
