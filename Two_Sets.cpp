#include<iostream>
#include<bits/stdc++.h>
#define ll long long
#define rep(i,n) for(int i=1;i<=n;i++)

using namespace std;

void printVector(vector<ll> &ans);

void solve(){
    ll n;
    cin>>n;
    ll totalSum = (n*(n+1))/2;
    if(totalSum%2==0){
        cout<<"YES"<<endl;
        vector<ll> sum1,sum2;
        ll div,rem,half=totalSum/2;
        div = (half)/(n+1);
        rem = (half)%(n+1);
        ll p=1,q=n;
        for(int i=1;i<=div;i++){
                sum1.push_back(p);
                sum1.push_back(q);
                p++;q--;
        }
        if(rem){
            sum1.push_back(rem);
        }
        printVector(sum1);
        cout<<endl;

        int lowerlim = div;

        if (rem){
            div++;
        }

        for(int i=lowerlim+1;i<=n-div;i++){
            if(rem && i == rem){
                continue;
            }
            sum2.push_back(i);
        }
        printVector(sum2);
    }
    else{
        cout<<"NO"<<endl;
    }
    
}

void printVector(vector<ll> &ans){
    cout<<ans.size()<<endl;
    for(auto a:ans){
        cout<<a<<" ";
    }
}

int main(int argc, char const *argv[])
{
    solve();
    return 0;
}
