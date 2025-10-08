#include<bits/stdc++.h>
using namespace std;

#define testcase int T; cin>>T; for (int tc = 1; tc <= T; tc++)
#define SETPRECISION cout<<fixed<<setprecision(5)

using ll=long long;

const double PI=acos(-1.0);

ll ceil(ll x, ll y){
    ll res=(x+y-1)/y;
    return res;
}


int solve(){
    int i,n;
    cin>>n;
    vector<string>vt;
    string str;

    for(i=0;i<n;i++){
        cin>>str;
        vt.push_back(str);
    }

    //  use 'auto' instead of 'vector<string>::reverse_iterator'

    for(vector<string>::reverse_iterator st=vt.rbegin();st!=vt.rend();st++){
        cout<<*st<<endl;
    }

    return 0;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    //testcase{
        solve();
    //}

    return 0;
}

