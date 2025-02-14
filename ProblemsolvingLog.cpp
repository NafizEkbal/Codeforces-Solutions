#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,x=0,z=0,count=0;
        cin>>n;
        string s;
        cin>>s;
        for(int i=0;i<n;i++){
            int x=s[i]-'A'+1;
            z=z+x;
            if(z<=n){
                count++;
            }
            
            
        }
 cout<<count<<endl;
    }
    
    return 0;
}