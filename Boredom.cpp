#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,count=0,cnt=0;
    cin>>n;
    int a[n];
    map<int,int>m;
    for(int i=0;i<n;i++){
        cin>>a[i];
        m[a[i]]++;
    }

    for(int i=0;i<n;i++){
        bool ck=false;
        for(int j=0;j<n;j++){
            if(a[i]==a[j]&&m[a[j]]>0){
            m[a[j]]--;
            ck=true;
            }
            else if(a[i]+1==a[j]&&m[a[j]]>0){
            m[a[j]]--;
            ck=true;
            }
            else if(a[i]-1==a[j]&&m[a[j]]>0){
            m[a[j]]--;
            ck=true;
            }
            }
            cnt=cnt+a[i];
            count=max(count,cnt);
            }
            cout<<count;
    return 0;
}