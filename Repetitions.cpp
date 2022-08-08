#include <iostream>
#include<string.h>

using namespace std;

int main()
{   
    /**
     * max length of substring not each dna basepair
     * so if aaattggggggcaaaaa
     * it is g cause g substrin in of 6 while a is at 5
     * but when it comes to base pair coutn a wins     * 
     */
    string str;
    getline(cin,str);
    int count=1,max=0;
    for(int i=0;i<str.length();i++){
        if(str[i+1] == str[i]){
            count++;
        }
        else{
            // cout<<count;
            // cout<<str[i];
            if(max<count){
                max=count;
            }
            count=1;
        }       
        
    }
    cout<<max;
    return 0;
}