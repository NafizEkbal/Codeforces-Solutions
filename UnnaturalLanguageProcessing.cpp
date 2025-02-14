#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        string r;

        for (int i = 0; i < n;i++){
            if ((i< n - 2) && (s[i] == 'a' || s[i] == 'e') && (s[i + 1] == 'b' || s[i + 1] == 'c' || s[i + 1] == 'd') && (s[i + 2] == 'a' || s[i + 2] == 'e')) {
                r=r+s[i];
                r=r+'.';
            } else if ((s[i] == 'a' || s[i] == 'e') && (i == n - 1 || (i < n - 2 && (s[i + 1] != 'b' && s[i + 1] != 'c' && s[i + 1] != 'd') && (s[i + 2] != 'a' && s[i + 2] != 'e')))) {
                r= r+s[i];
            } else {
                r=r+s[i];
                if (i < n - 1 && (s[i + 1] == 'a' || s[i + 1] == 'e'))
                    r=r+ '.';
            }
        }

        cout << r << endl;
    }

    return 0;
}
