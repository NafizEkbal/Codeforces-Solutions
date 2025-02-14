#include<bits/stdc++.h>
using namespace std; 

int main() {
    int t;
    cin>>t;
    char a[8][8];
    while(t--){

        int r=0;
       

        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                cin>>a[i][j];
            }
        }

        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                if(a[i][j]=='R'){
                    r++;
                }
            }
            if(r==8){
                    break;
                }

                else{
                    r=0;
                }
        }

       
if(r==8){
  cout<<'R'<<endl;
}

else{
    cout<<'B'<<endl;
}
    

}
    return 0;
}