#include<iostream>
#include<bits/stdc++.h>
#define ll long long
#define rep(i,n) for(int i=0;i<n;i++)

using namespace std;

void solve(){
    ll n;
    cin>>n;
    string ans,msb;
    int first = 16-n;
    for(ll i=0;i<pow(2,n);i++){
        ans="";
        string k =bitset<16>(i).to_string();
        msb=k[first];       
        for(int i=first;i<15;i++){
            if(k[i]!=k[i+1]){
                ans+='1';
            }
            else{
                ans+='0';
            }
        }
        cout<<msb<<ans<<endl;
    }
}

int main(int argc, char const *argv[])
{
    solve();
    return 0;
}
