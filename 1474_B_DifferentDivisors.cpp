#include <bits/stdc++.h>
using namespace std;

int IsPrime(int k){
    for(int i=2;i<=sqrt(k);i++){
        if(k%i==0){
            return 0;
        }
    }
    return 1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int d;
        cin>>d;
        int i=1+d;
        while(IsPrime(i)==0){
            i++;
        }
        long long x,y;
        x=i;
        i=x+d;
        while(!IsPrime(i)){
            i++;
        }
        y=i;
        cout<<x*y<<endl;
    }

    return 0;
}