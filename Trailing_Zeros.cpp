#include<iostream>
#include<bits/stdc++.h>
#define ll long long
#define rep(i,n) for(int i=0;i<n;i++)
#define mod 1000000007
using namespace std;


void solve(){
    ll n,count=0,val=5;
    cin>>n;
    while(val<=n){
        count+=n/val;
        val*=5;
    }
    cout<<count;

}

int main(int argc, char const *argv[])
{
    solve();
    return 0;
}
