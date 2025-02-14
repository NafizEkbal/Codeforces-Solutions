#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        bool odd=false;
        if(n%2){
            odd=true;
        }
        else{
            while(n>1){
                n=n/2;
                if(n>1 && n%2){
                    odd=true;
                    break;
                }
            }
        }
        if(odd){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
    return 0;
}