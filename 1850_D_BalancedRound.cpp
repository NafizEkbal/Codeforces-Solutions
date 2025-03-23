#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        sort(v.begin(), v.end());

        int max_length = 1, current_length = 1;

        for (int i = 1; i < n; i++) {
            if (v[i] - v[i - 1] <= k) {
                current_length++;
            } else {
                max_length = max(max_length, current_length);
                current_length = 1;
            }
        }
        max_length = max(max_length, current_length);

        cout << (n - max_length) << endl;
    }

    return 0;
}
