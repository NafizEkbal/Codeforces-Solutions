#include <bits/stdc++.h>
using namespace std;

void check(int n){
    if(n==1){
        cout<<0<<endl;
        return;
    }
    int cnt=0;
    while(n%3==0){
        if(n%2==1){
            n*=2;
            cnt++;
        }
        
        n/=6;
        cnt++;
        if(n==1){
            cout<<cnt<<endl;
            return;
        }
    }
    cout<<-1<<endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin>>n;
        if(n==1 || n%3==0){
            check(n);
        }else{
            cout<<-1<<endl;
        }
    }

    return 0;
}