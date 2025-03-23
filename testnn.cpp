#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++) {
            if (i == 1) {
                cout << 2 << " ";
            }
            else if (i == 2) {
                cout << 1 << " ";
            }
            else {
                cout << i << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
