#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void printVector(vector<int> &a){
    for(auto x:a){
        cout<<x<<" ";
    }
}

void permute(vector<int> &nums,vector<vector<int>> &ans,vector<int> &ds,int freq[]){
    if(ds.size() == nums.size()){
        ans.push_back(ds);
        return;
    }    
    for(size_t i=0;i<nums.size();i++){
        if(!freq[i]){
            ds.push_back(nums[i]);
            freq[i]=1;
            permute(nums,ans,ds,freq);
            freq[i]=0;
            ds.pop_back();
        }
    }
}

void solve(vector<vector<int>> &ans){
    bool ansBool=false;
    size_t count;
    for(auto a:ans){
        count =0;
        for(size_t i =0;i<a.size()-1;i++){
            // if(abs(a[i]-a[i+1])<=1){
            //     break;
            // }
            if(abs(a[i]-a[i+1])>1){
                // ansBool = true;
                count++;
                // cout<<a[i]<<" "<<a[i+1]<<endl;
            }
            
        }
        if(count == a.size()-1){
            printVector(a);
            cout<<endl;
            return;
        }
    }
    cout<<"NO SOLUTION"<<endl;
}

int main(int argc, char const *argv[])
{
    size_t n=0;
    cin>>n;
    // if(n<=3){
    //     cout<<"NO SOLUTION"<<endl;
    //     return 0;
    // }
    vector<int> nums;

    for (size_t i = 1; i <= n; i++)
    {
        nums.push_back(i);
    }
    
    vector<vector<int>> ans;
    vector<int> ds;
    int frq[nums.size()]={0};
    permute(nums,ans,ds,frq);
    
    // for(auto a:ans){
    //     printVector(a);
    //     cout<<endl;
    // }
    solve(ans);
    
    return 0;
}
