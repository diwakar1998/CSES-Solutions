#include<iostream>
#include<bits/stdc++.h>
#define ll long long
#define rep(i,n) for(int i=0;i<n;i++)

using namespace std;

void solve(){
    ll a,b;
    cin>>a>>b;
    if(b>a){
        swap(a,b);
    }

    if(a > b*2 || (a+b)%3 != 0){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }


  
}

int main(int argc, char const *argv[])
{
    ll n;
    cin>>n;
    while(n--){
        solve();
    }
    return 0;
}
