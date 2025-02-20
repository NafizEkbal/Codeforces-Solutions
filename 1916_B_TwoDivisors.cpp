#include <bits/stdc++.h>
using namespace std;

int LCM(int a, int b)
{
    for(int i=b; ;i=i+b) {
        if (i%a==0)
            return i;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int a,b;
        long long res;
        cin>>a>>b;
        if(b%a==0){
            res=(b/a)*b;
        }
        else{
            res=LCM(a,b);
        }

        cout<<res<<endl;
    }
    return 0;
}