#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int a[m];
    for(int i=0;i<m;i++){
        cin>>a[i];
    }
    long long int t=a[0]-1;
    for(int i=1;i<m;i++){
        if(a[i]<a[i-1]){
            t=t+n-(a[i-1]-a[i]);
        }
        else{
            t=t+a[i]-a[i-1];
        }
    }
    cout<<t;
    
    return 0;
}