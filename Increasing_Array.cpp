#include<iostream>
#include<bits/stdc++.h>
#define ll long long
#define rep(i,n) for(int i=0;i<n;i++)

using namespace std;

void solve(){
    ll n;
    cin>>n;
    ll a[n];
    ll ans=0;
    rep(i,n)cin>>a[i];
    for(int i=1;i<n+1;i++){
        if(a[i-1]>a[i]){
            ans+=abs(a[i-1]-a[i]);
            // cout<<a[i]<<":"<<ans<<endl;
            // cout<<ans<<endl;
            a[i]=a[i-1];

        }
    }
    // rep(i,n)cout<<a[i];
    cout<<ans;
}

int main(int argc, char const *argv[])
{
    solve();
    return 0;
}
