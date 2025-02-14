#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n,a,b,c,res=0;
    cin>>n>>a>>b>>c;
    for(int x=0;x<=4000;x++){
        for(int y=0;y<=4000;y++){
            int cz=n-(a*x+b*y);
            if(cz<0){
                break;
            }
            double z=cz/(double)c;
            if(z==(int)z){
                res=max(res,x+y+(int)z);
                }
            
        }
    }
    cout<<res;
    
}    