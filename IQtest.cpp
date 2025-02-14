#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n,odd=0,even=0,od,ev;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]%2){
            odd++;
            od=i;
        }
        else{
            even++;
            ev=i;
        }
    }
    if(odd==1&&even>=2){
        cout<<od+1;
    }
    if(even==1&&odd>=2){
        cout<<ev+1;
    }

    return 0;
}