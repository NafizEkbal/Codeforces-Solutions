#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        string p, s;
        cin >> p >> s;

        int i = 0, j = 0;
        int n = p.length(), m = s.length();
        bool valid = true;

        while (i < n && j < m) {
            if (p[i] != s[j]) {
                valid = false;
                break;
            }
            
            int count = 1;
            if (j + 1 < m && s[j] == s[j + 1]) {
                count++;
            }
            i++;
            j += count;
        }

    
        if (i == n && j == m)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
