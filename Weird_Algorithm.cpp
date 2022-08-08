#include <iostream>
using namespace std;

int main()
{
    long int n;
    cin>>n;
    while(true){
        
        if(n==1){
            cout<<1;
            break;
        }
        cout<<n<<" ";
        if(n%2 == 1){
            n=n*3+1;
        }
        else if(n%2 == 0){
            n=n/2;
        }
        
    }
    
    return 0;
}

