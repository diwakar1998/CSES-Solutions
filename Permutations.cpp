#include<iostream>
#include<bits/stdc++.h>
#define ll long long
#define rep(i,n) for(int i=0;i<n;i++)

using namespace std;

void solve(){
    int n;
    cin>>n;
    if(n==1){
        cout<<1;
        return;
    }
    if(n<4){
        cout<<"NO SOLUTION";
        return;
    }
    string ans1;

    string ans2;
    // int a=n,b=1;
    // if(n%2==0){
    //     a=1;
    //     b=n;
    // }
    for(int i=1;i<=n;i++){
        if(i%2==0){
            ans1+=to_string(i)+" ";
        }
        if(i%2!=0){
            ans2+=to_string(i)+" ";
        }
    }
 
    cout<<ans1+ans2;
}

int main(int argc, char const *argv[])
{
    solve();
    return 0;
}
