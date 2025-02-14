#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n==1){
            cout<<1<<endl;
        }
        else if(n>1&&n<=4){
            cout<<2<<endl;
        }
        else if(n>4&&n<=10){
            cout<<3<<endl;
        }
        else if(n>10&&n<=22){
            cout<<4<<endl;
        }
        else if(n>22&&n<=46){
            cout<<5<<endl;
        }
        else if(n>46&&n<=94){
            cout<<6<<endl;
        }
        else if(n>94&&n<=190){
            cout<<7<<endl;
        }
        else if(n>190&&n<=382){
            cout<<8<<endl;
        }
        else if(n>382&&n<=766){
            cout<<9<<endl;
        }
        else if(n>766&&n<=1534){
            cout<<10<<endl;
        }
        else if(n>1534&&n<=3070){
            cout<<11<<endl;
        }
        else if(n>3070&&n<=6142){
            cout<<12<<endl;
        }
        else if(n>6142&&n<=12286){
            cout<<13<<endl;
        }
        else if(n>12286&&n<=24574){
            cout<<14<<endl;
        }
        else if(n>24574&&n<=49150){
            cout<<15<<endl;
        }
        else if(n>49150&&n<=98302){
            cout<<16<<endl;
        }

        else{
            cout<<17<<endl;
        }
    }
    return 0;
}