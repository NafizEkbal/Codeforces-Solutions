#include<bits/stdc++.h>
using namespace std; 

int main() {
     int n,count=0;
     cin>>n;
     int p[n],q[n];
     for(int i=0;i<n;i++){
         cin>>p[i]>>q[i];
     }
    for(int i=0;i<n;i++){
        if(q[i]-p[i]>=2){
            count++;
        }
     }
    return 0;
}