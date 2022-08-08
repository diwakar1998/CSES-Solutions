#include<iostream>
#include<bits/stdc++.h>
#define ll long long
#define rep(i,n) for(int i=0;i<n;i++)

using namespace std;

void solve(){
  ll y,x;
  cin>>y>>x;
  ll ans=0;
  if(y>=x){
    if(y%2 == 0){
        ans=(y*y)-x+1;
        
    }
    else{
        ans = ((y-1)*(y-1))+x;
        
    }
    
  }
  else if(y<x){
    if(x%2 == 0){
        ans = ((x-1)*(x-1))+y;
        
    }
    else{
        ans=(x*x)-y+1;
    }
    // ans+=2;
  }
  cout<<ans<<endl;
}

int main(int argc, char const *argv[])
{
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
