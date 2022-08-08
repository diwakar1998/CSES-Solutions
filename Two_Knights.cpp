#include<iostream>
#include<bits/stdc++.h>
#define ll long long
#define rep(i,n) for(int i=0;i<n;i++)

using namespace std;

void solve(){
    ll n,i,total,attack;
    cin>>i;

    for( n=1;n<=i;n++){
        total = ((n*n)*((n*n)-1))/2;
        attack = 4*(n-2)*(n-1);
        cout<<total-attack<<endl;
    }

    
}

int main(int argc, char const *argv[])
{
    solve();
    return 0;
}
