#include <bits/stdc++.h>
using namespace std;

/*
  For a sequence of segment lengths a1 … an you can obtain
  any resultant vector length in the closed interval
        [ L , S ],
  where
        S = a1 + … + an                    (total length)
        M = max(ai)                        (longest segment)
        L = max(0 , 2*M − S).              (minimal possible length)

  So the target is reachable ⇔  L ≤ d ≤ S,
  with d = distance between (px,py) and (qx,qy).
  We compare squares to avoid floating‑point error.
*/

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;

        long long px, py, qx, qy;
        cin >> px >> py >> qx >> qy;

        long long S = 0;          // total length
        long long M = 0;          // longest segment
        for (int i = 0; i < n; ++i) {
            long long a;
            cin >> a;
            S += a;
            M = max(M, a);
        }

        long long dx = qx - px;
        long long dy = qy - py;
        long long d2 = dx * dx + dy * dy;   // squared target distance

        long long L  = max(0LL, 2 * M - S); // minimal reachable length
        long long S2 = S * S;               // squares for comparison
        long long L2 = L * L;

        if (d2 >= L2 && d2 <= S2)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}
