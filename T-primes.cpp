#include<bits/stdc++.h>
using namespace std;

bool is_prime(long long int x){
    if(x<2){
        return false;
    }
     if (x == 2||x==3) {
        return true;
    }
    if (x % 2 == 0 ||x%3==0) {
        return false;
    }
    for(long long int i=5;i*i<=x;i=i+6){
        if(x % i == 0 || x % (i + 2) == 0){
            return false;
        }
    }
    return true;
}
void check(long long int z){
    long long int x = sqrt(z);
    if (x * x != z) {
        cout << "NO" << endl;
        return;
    }
    if (!is_prime(x)) {
        cout << "NO" << endl;
        return;
    }
    cout<<"YES"<<endl;
}
int main()
{
    int n;
    cin>>n;
    long long int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];}
    for(int i=0;i<n;i++){
         check(a[i]);
    }
}
