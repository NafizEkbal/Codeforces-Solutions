#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        long long a, b;
        cin >> a >> b;
        int cnt = 0;

        if (a > b)
        {
            swap(a, b);
        }
        if (b % a || b / a & ((b / a) - 1))
        {
            cout << -1 << endl;
            continue;
        }

        while (a != b)
        {

            if (a * 8 <= b)
            {
                a *= 8;
            }
            else if (a * 4 <= b)
            {
                a *= 4;
            }
            else if (a * 2 <= b)
            {
                a *= 2;
            }

            cnt++;
        }

        cout << cnt << endl;
    }

    return 0;
}