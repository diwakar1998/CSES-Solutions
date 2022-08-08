#include<iostream>
#include<bits/stdc++.h>
#define ll long long
#define rep(i,n) for(int i=0;i<n;i++)

using namespace std;

void solve(){
   //develop cpp algorithm from python solution
   string s;
   cin>>s;

   ll arr[26]{0};

   for(int i=0;i<s.length();i++){
        // cout<<s[i];
        // cout<<int(s[i]);
        arr[int(s[i])-65]++;
   }
//    int n=26;
//    rep(i,n)cout<<arr[i];
    ll oddcount=0;
    string ans;
    char oddChar;
   for(int i=0;i<26;i++){
        ll count =arr[i];
        ll printCount = count/2;
        if(arr[i]==0){
            continue;
        }
        if(arr[i]%2!=0){
            oddcount++;
            oddChar+=char(i+65);
        }
        if(oddcount>1){
            cout<<"NO SOLUTION";
            return;
        }
        
        for(int j=0;j<printCount;j++){
            ans+=char(i+65);
        }
   }
   
   //print the reverse string
   string temp = ans;
   reverse(ans.begin(),ans.end());
    if(oddcount){
        cout<<temp+oddChar+ans;
   }
   else{
    cout<<temp+ans;
   }
   
}

int main(int argc, char const *argv[])
{
    solve();
    return 0;
}
