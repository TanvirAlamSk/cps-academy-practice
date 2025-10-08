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
    int i,len,c0=0,c1=0,ans=0;

    string str;
    cin>>str;

    len=str.length();

    for(i=0;i<len;i++){
        if(str[i]=='0'){
            c0++;
        }else{
            c1++;
        }
    }

    for(i=0;i<len;i++){
        if(str[i]=='1' && c0>0){
            c0--;
        }else if(str[i]=='0' && c1>0){
            c1--;
        }else{
            break;
        }
    }

    cout<<c0+c1<<endl;

    return 0;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    testcase{
        solve();
    }

    return 0;
}

