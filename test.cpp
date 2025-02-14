#include<bits/stdc++.h>
using namespace std; 

int main() {
    int t;
    cin >> t;
    
    while(t--){
        char a[8][8];
        bool check = false;

        for(int i=0; i<8; i++){
            for(int j=0; j<8; j++){
                cin >> a[i][j];
            }
        }

        // Check rows
        for(int i=0; i<8; i++){
            check = true;
            for(int j=0; j<8; j++){
                if(a[i][j] != 'R'){
                    check = false;
                    break;
                }
            }
            if(check){
                break;
            }
        }

        // If no rows found, check columns
        if(!check){
            for(int i=0; i<8; i++){
                check = true;
                for(int j=0; j<8; j++){
                    if(a[j][i] != 'R'){
                        check = false;
                        break;
                    }
                }
                if(check){
                    break;
                }
            }
        }

        if(check){
            cout << "R" << endl;
        } else {
            cout << "B" << endl;
        }
    }
    
    return 0;
}
