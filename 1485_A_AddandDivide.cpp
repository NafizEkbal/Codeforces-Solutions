#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        long long a,b;
        cin>>a>>b;
        int op=0;
        if(b==1){
            b++;
            op++;
        }
        long long op1=0;
        long long temp=a;
        while(temp){
            temp=temp/b;
            op1++;
        }
        int res=op1+op;
        int cnt=0;
        for(int i=b+1;i<b+res-op;i++){
            temp=a;
            int op2=0;
            while(temp){
                temp=temp/i;
                op2++;
            }
            cnt++;
            res=min(res,op2+cnt+op);
        }
        cout<<res<<endl;
    }

    return 0;
}