#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,a,b,q,res;
    cin>>n>>m>>a>>b;
    int x=n/m;
    int y=n%m;
    int z=y*a;
    int z2=x*b;
    int p=n*a;
    if((double)n/m==int(n/m)){
         q=x*b;
    }
    else
        q=(x+1)*b;
    int r=z+z2;
    res=min({p,q,r});
    cout<<res;
    return 0;
}