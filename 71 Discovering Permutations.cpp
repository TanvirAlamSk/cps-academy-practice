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
    int i,j,n,k,mxp=1,count=0,ind;
    char ch;

    cin>>n>>k;

    for(i=2; i<=n; i++) {
        mxp*=i;
    }

    if(k>mxp) {
        k=mxp;
    }


    string st;
    for(i=0; i<n; i++) {
        st.push_back('A'+i);
    }


    /*
    cout<<"use next_permutation"<<endl;

    do{
        if(k==0)break;
        cout<<st<<endl;
        k--;
    }while(next_permutation(st.begin(),st.end()));

    sort(st.begin(),st.end());
    cout<<endl;

    */


    for(i=0; i<n; i++) {
        ind=n-1;
        while(ind>0){
            ch=st[ind];
            st[ind]=st[ind-1];
            st[ind-1]=ch;
            ind--;
            cout<<st<<endl;
            k--;
            if(k==0){
                return 0;
            }
        }
    }

    return 0;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    testcase{
        cout<<"Case "<<tc<<':'<<endl;
        solve();
    }

    return 0;
}
