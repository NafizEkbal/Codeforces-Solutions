#include <bits/stdc++.h>
using namespace std;

int check(long long n) {
    int a[10]={0};
    long long temp=n;
    while(temp){
        int digit = temp%10;
        if(digit!=0 && a[digit]==0){
            if(n%digit){
                return 0;
            }
            a[digit]=1;
        }
        temp=temp/10;
    }
    return 1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin>>n;
        while(1){
            if(check(n)){
                break;
            }
            n++;
        }
        cout<<n<<endl;
    }

    return 0;
}