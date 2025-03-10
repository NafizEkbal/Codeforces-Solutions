#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    if (n == 2) {
        // Special case for n = 2
        if (k % 2 == 1) {
            cout << "2 1" << endl;
        } else {
            cout << "1 2" << endl;
        }
        return;
    }

    if (k % 2 == 1) {
        // If k is odd, swap adjacent cells
        for (int i = 1; i <= n; i++) {
            if (i % 2 == 1 && i + 1 <= n) {
                cout << i + 1 << " ";
            } else if (i % 2 == 0) {
                cout << i - 1 << " ";
            } else {
                // If n is odd, the last cell teleports to itself (invalid), so teleport to n
                cout << n << " ";
            }
        }
    } else {
        // If k is even, teleport everyone to the exit
        for (int i = 1; i <= n; i++) {
            if (i == n) {
                // Cell n cannot teleport to itself, so teleport to n-1
                cout << n - 1 << " ";
            } else {
                cout << n << " ";
            }
        }
    }
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}