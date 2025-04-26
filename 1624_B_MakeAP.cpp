#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        long long a,b,c;
        cin>>a>>b>>c;
        if(a-b==b-c){
            cout<<"YES"<<endl;
            continue;
        }
        //for c
        long long d=b-a;
        long long c1=a+2*d;
        if(c1%c==0 && c1/c>0){
            cout<<"YES"<<endl;
            continue;
        }
        //for b
        if((a+c)%2==0){
            long long b1=(a+c)/2;
            if(b1%b==0 && b1/b>0){
                cout<<"YES"<<endl;
                continue;
            }
        }
        //for a
        d=c-b;
        if((c-2*d)%a==0 && (c-2*d)/a>0){
            cout<<"YES"<<endl;
            continue;
        }
        cout<<"NO"<<endl;
    }

    return 0;
}