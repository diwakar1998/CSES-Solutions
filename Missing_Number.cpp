#include <iostream>
using namespace std;

int main()
{
    long int n;
    cin>>n;
    long int sum=0;
    long int temp;
    for (int i = 1; i < n; i++)
    {
        cin>>temp;
        sum+=temp;
    }
    long int actualSum = n*(n+1)/2;
    cout<<actualSum-sum;
         
    return 0;
}