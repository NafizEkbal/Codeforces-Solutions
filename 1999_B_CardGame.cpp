#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int res=0;
        int a1,a2,b1,b2;
        cin>>a1>>a2>>b1>>b2;
        int sun=0;
        //1st round
        if(a1>b1){
            sun++;
        }
        else if(a1<b1){
            sun--;
        }
        if(a2>b2){
            sun++;
        }
        else if(a2<b2){
            sun--;
        }
        if(sun>0){
            res++;
        }
        //2nd round
        sun=0;
        if(a1>b2){
            sun++;
        }
        else if(a1<b2){
            sun--;
        }
        if(a2>b1){
            sun++;
        }
        else if(a2<b1){
            sun--;
        }
        if(sun>0){
            res++;
        }
        //3rd round
        sun=0;
        if(a2>b1){
            sun++;
        }
        else if(a2<b1){
            sun--;
        }
        if(a1>b2){
            sun++;
        }
        else if(a1<b2){
            sun--;
        }
        if(sun>0){
            res++;
        }
        //4th round
        sun=0;
        if(a2>b2){
            sun++;
        }
        else if(a2<b2){
            sun--;
        }
        if(a1>b1){
            sun++;
        }
        else if(a1<b1){
            sun--;
        }
        if(sun>0){
            res++;
        }

        cout<<res<<endl;

    }
    return 0;
}