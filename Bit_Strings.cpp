#include<iostream>
#include<bits/stdc++.h>
#define ll long long
#define rep(i,n) for(int i=0;i<n;i++)
#define mod 1000000007
using namespace std;

ll power2(ll n){
    ll res=1;
    for(ll i=1;i<=n;i++){
        // cout<<i<<endl;
        res = (res%mod)*(2%mod);
        // res *= 2;
        // cout<<res;
    }
    return res%mod;
}

void solve(){
    ll n;
    cin>>n;
    cout<<power2(n);
    // ll mod =1000000007;
    // cout<<((ll)pow(2,n)%1000000007);
}

int main(int argc, char const *argv[])
{
    solve();
    return 0;
}
