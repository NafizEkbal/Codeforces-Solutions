#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n,k,count=99999;
    cin>>n>>k;
    int a[k];
    for(int i=0;i<k;i++){
        cin>>a[i];
    }
    sort(a,a+k);
    reverse(a,a+k);
    
    if(n==k){
        count=a[k-n]-a[k-1];
    }
    else{
    for(int i=0;i<=k-n;i++){
        count=min(count,a[i]-a[i+n-1]);
    }}
    cout<<count;
    return 0;
}