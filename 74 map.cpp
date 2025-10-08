#include<bits/stdc++.h>
using namespace std;

#define testcase int T; cin>>T; for (int tc = 1; tc <= T; tc++)
#define SETPRECISION cout<<fixed<<setprecision(5)

using ll=long long;

const double PI=acos(-1.0);

ll ceil(ll x, ll y) {
    ll res=(x+y-1)/y;
    return res;
}


int solve() {
    int i;
    map<int,int>mp;
    mp[1]=10;
    mp[2]=20;
    mp[3]=10;
    mp[4]=20;
    mp[5]=10;
    mp[6]=20;

    for(auto a:mp){
        cout<<a.first<<" -> "<<a.second<<endl;
    }

    mp.erase(2);
    cout<<"Erase -> "<<endl;
    for(auto a:mp){
        cout<<a.first<<" -> "<<a.second<<endl;
    }
    return 0;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    //testcase{
    solve();
    //}

    return 0;
}
