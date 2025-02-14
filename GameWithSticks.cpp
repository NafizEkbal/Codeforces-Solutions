#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int x=min(n,m);
    if(x%2){
        cout<<"Akshat";
    }
    else{
        cout<<"Malvika";
    }
    return 0;
}